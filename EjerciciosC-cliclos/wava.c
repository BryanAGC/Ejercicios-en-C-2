#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <math.h>

#define SAMPLE_RATE 44100
#define AMPLITUDE 32767
#define M_PI 3.14159265358979323846

typedef struct {
    uint32_t chunk_id;
    uint32_t chunk_size;
    uint32_t format;
    uint32_t subchunk1_id;
    uint32_t subchunk1_size;
    uint16_t audio_format;
    uint16_t num_channels;
    uint32_t sample_rate;
    uint32_t byte_rate;
    uint16_t block_align;
    uint16_t bits_per_sample;
    uint32_t subchunk2_id;
    uint32_t subchunk2_size;
} wav_header;

int main() {
    wav_header header;
    uint16_t *data_buffer;
    uint32_t data_size = SAMPLE_RATE * 2;
    uint32_t i;

    // Rellena la cabecera
    header.chunk_id = 0x46464952; // "RIFF"
    header.format = 0x45564157; // "WAVE"
    header.subchunk1_id = 0x20746d66; // "fmt "
    header.subchunk1_size = 16;
    header.audio_format = 1;
    header.num_channels = 1;
    header.sample_rate = SAMPLE_RATE;
    header.bits_per_sample = 16;
    header.byte_rate = header.sample_rate * header.num_channels * header.bits_per_sample / 8;
    header.block_align = header.num_channels * header.bits_per_sample / 8;
    header.subchunk2_id = 0x61746164; // "data"
    header.subchunk2_size = data_size * header.num_channels * header.bits_per_sample / 8;
    header.chunk_size = 36 + header.subchunk2_size;

    // Aloca el buffer de audio
    data_buffer = (uint16_t*)malloc(data_size * sizeof(uint16_t));

    // Genera una onda sinusoidal de 440 Hz durante 1 segundo
    for (i = 0; i < data_size; i++) {
        double t = (double)i / SAMPLE_RATE;
        data_buffer[i] = (uint16_t)(AMPLITUDE * sin(2 * M_PI * 440 * t));
    }

    // Escribe los datos del archivo
    FILE *file = fopen("audio.wav", "wb");
    if (!file) {
        printf("Error al abrir el archivo\n");
        return 1;
    }

    fwrite(&header, sizeof(header), 1, file);
    fwrite(data_buffer, sizeof(uint16_t), data_size, file);

    fclose(file);
    free(data_buffer);

    return 0;
}
