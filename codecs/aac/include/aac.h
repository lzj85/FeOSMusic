#ifndef AAC_H
#define AAC_H

#include <feos.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#define READ_BUF_SIZE  1940
#define MP4_TRACK_AUDIO 1
/* 
 * MP4 files are handled differently then plain aac files, but
 * info like sample rate are stored in the same decoder structure
 */
FEOS_EXPORT int openFile(const char * name);
FEOS_EXPORT int getSampleRate(void);
FEOS_EXPORT int getnChannels(void);
FEOS_EXPORT int seek(int pos);
FEOS_EXPORT int getPosition(void);
FEOS_EXPORT int getResolution(void);
FEOS_EXPORT void freeDecoder(void);
FEOS_EXPORT void getFlags(int* flags);
FEOS_EXPORT int decSamples(int length, short * destBuf, void * context);

#endif /* AAC_H */
