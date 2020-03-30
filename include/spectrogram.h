#ifndef __SPECTROGRAM_H__

#ifdef __cplusplus
extern "C" {
#endif

int render_spectrogram_bitmap(
    const double* timeDomainSamples,
    const int samplesSize,
    const int sampleRate,
    unsigned char** bitmapData,
    const unsigned int width,
    const unsigned int height
);

#ifdef __cplusplus
}
#endif

#endif