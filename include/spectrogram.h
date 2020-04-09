#ifndef __SPECTROGRAM_H__

#include <stdbool.h>
#include "../src/window.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct
{	const char *sndfilepath, *pngfilepath, *filename ;
	int width, height ;
	bool border, log_freq, gray_scale ;
	double min_freq, max_freq, fft_freq ;
	enum WINDOW_FUNCTION window_function ;
	double spec_floor_db ;
    void* ctxdata;
} RENDER ;

int init_spectrogram(RENDER*);

int render_spectrogram_bitmap(
    const double* timeDomainSamples,
    const int samplesSize,
    const int sampleRate,
    unsigned char** bitmapData,
    const unsigned int width,
    const unsigned int height,
    RENDER* render,
    double triggerRender
);

void deinit_spectrogram(RENDER*);

#ifdef __cplusplus
}
#endif

#endif