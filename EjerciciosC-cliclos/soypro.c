#define _USE_MATH_DEFINES
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <sndfile.h>
#include <lame/lame.h>

#define SAMPLE_RATE 44100
#define AMPLITUDE 0.25
#define DURATION 5.0
#define BUFFER_SIZE 8192

int main(int argc, char** argv) {
  SNDFILE* wav_file;
  SF_INFO wav_info;
  float* buffer;
  int samples = DURATION * SAMPLE_RATE;
  int i;

  buffer = (float*) malloc(samples * sizeof(float));
  if (!buffer) {
    printf("Error: could not allocate memory for buffer\n");
    return EXIT_FAILURE;
  }

  for (i = 0; i < samples; i++) {
    buffer[i] = AMPLITUDE * sin(2.0 * M_PI * 440.0 * ((float) i / SAMPLE_RATE));
  }

  wav_info.samplerate = SAMPLE_RATE;
  wav_info.frames = samples;
  wav_info.channels = 1;
  wav_info.format = SF_FORMAT_WAV | SF_FORMAT_FLOAT;

  wav_file = sf_open("output.wav", SFM_WRITE, &wav_info);
  if (!wav_file) {
    printf("Error: could not open WAV file for writing\n");
    free(buffer);
    return EXIT_FAILURE;
  }

  sf_write_float(wav_file, buffer, samples);
  sf_close(wav_file);

  free(buffer);

  // convertir a MP3
  SNDFILE* infile;
  SF_INFO sfinfo;
  FILE* outfile;
  lame_t lame;
  short int wav_buffer[BUFFER_SIZE * 2];
  unsigned char mp3_buffer[BUFFER_SIZE];
  int read, write;

  infile = sf_open("output.wav", SFM_READ, &sfinfo);
  if (!infile) {
    printf("Error: could not open WAV file for reading\n");
    return EXIT_FAILURE;
  }

  outfile = fopen("output.mp3", "wb");
  if (!outfile) {
    printf("Error: could not open MP3 file for writing\n");
    sf_close(infile);
    return EXIT_FAILURE;
  }

  lame = lame_init();
  lame_set_in_samplerate(lame, sfinfo.samplerate);
  lame_set_out_samplerate(lame, sfinfo.samplerate);
  lame_set_num_channels(lame, sfinfo.channels);
  lame_set_quality(lame, 2);
  lame_init_params(lame);

  do {
    read = sf_read_short(infile, wav_buffer, BUFFER_SIZE * 2);
    if (read == 0) {
      write = lame_encode_flush(lame, mp3_buffer, BUFFER_SIZE);
    } else {
      write = lame_encode_buffer_interleaved(lame, wav_buffer, read, mp3_buffer, BUFFER_SIZE);
    }
    fwrite(mp3_buffer, write, 1, outfile);
  } while (read != 0);

  sf_close(infile);
  fclose(outfile);
  lame_close(lame);

  return EXIT_SUCCESS;
}
