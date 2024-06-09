#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <sndfile.h>
#include <lame/lame.h>


#ifndef M_PI
    #define M_PI 3.14159265358979323846
#endif

#define SAMPLE_RATE 44100
#define DURATION 5.0 //Duracion de la onda

int main()
{
    SF_INFO info;
    SNDFILE *outfile;
    float *buffer;
    int frames = SAMPLE_RATE * DURATION;
    int i;

    buffer = (float *) malloc(frames * sizeof(float));

    //ciclo for que genera una onda, esta onda sera interpretada como un sonido
    for (i = 0; i < frames; i++) {
        buffer[i] = sin(2 * M_PI * i * 440 / SAMPLE_RATE);
    }

    info.samplerate = SAMPLE_RATE;
    info.channels = 1;
    info.format = SF_FORMAT_WAV | SF_FORMAT_FLOAT;

    outfile = sf_open("PruebaWAV.wav", SFM_WRITE, &info);

    sf_writef_float(outfile, buffer, frames);

    sf_close(outfile);
    free(buffer);

    // Abrir el archivo WAV como entrada
    FILE *wav_input = fopen("PruebaWAV.wav", "rb");

    // Crear el archivo MP3 de salida
    FILE *mp3_output = fopen("PruebaMP3.mp3", "wb");

    // Configurar el codificador LAME
    lame_t lame = lame_init();
    lame_set_in_samplerate(lame, SAMPLE_RATE);
    lame_set_VBR(lame, vbr_default);
    lame_init_params(lame);

    // Configurar los búferes de entrada y salida
    const int PCM_SIZE = 8192;
    short pcm_buffer[PCM_SIZE*2];
    unsigned char mp3_buffer[PCM_SIZE*2];

    int read, write;

    do {
        // Leer un bloque de audio PCM del archivo WAV
        read = fread(pcm_buffer, 2*sizeof(short), PCM_SIZE, wav_input);

        // Codificar el bloque PCM en un bloque de audio MP3
        write = lame_encode_buffer_interleaved(lame, pcm_buffer, read, mp3_buffer, PCM_SIZE*2);

        // Escribir el bloque de audio MP3 en el archivo de salida
        fwrite(mp3_buffer, write, 1, mp3_output);

    } while (read != 0);

    // Finalizar la codificación y cerrar los archivos de entrada y salida
    write = lame_encode_flush(lame, mp3_buffer, PCM_SIZE*2);
    fwrite(mp3_buffer, write, 1, mp3_output);

    lame_close(lame);
    fclose(wav_input);
    fclose(mp3_output);
    // Fin del código agregado

    return 0;
}
