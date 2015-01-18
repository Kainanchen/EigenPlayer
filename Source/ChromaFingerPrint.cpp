//
//  ChromaPrint.cpp
//  EigenPlayer
//
//  Created by Ken Chen on 14-12-15.
//
//
#include "../Include/acoustid/chromaprint.h"
#include "ChromaFingerPrint.h"

ChromaFingerPrint::ChromaFingerPrint()
{
	chromaprintContext = chromaprint_new(CHROMAPRINT_ALGORITHM_DEFAULT);
}

ChromaFingerPrint::~ChromaFingerPrint()
{
	chromaprint_free(chromaprintContext);
}


String ChromaFingerPrint::calculateFingerPrint(File audioFile)
{
/*
	formatManager.registerBasicFormats();
	AudioFormatReader *reader = formatManager.createReaderFor(audioFile);
	AudioSampleBuffer *audioContent = new AudioSampleBuffer(reader->numChannels,reader->lengthInSamples);
	reader->read(audioContent, 0, reader->lengthInSamples, 0, true, false);

	chromaprint_feed(chromaprintContext, audioContent->getWritePointer(1), reader->lengthInSamples);
	chromaprint_start(chromaprintContext, reader->sampleRate, audioContent->getNumChannels());
	chromaprint_finish(chromaprintContext);
	char *fingerprint;
	chromaprint_get_fingerprint(chromaprintContext, &fingerprint);
	//free(fingerprint);
	return String(fingerprint);
 */
}