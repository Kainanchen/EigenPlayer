//
//  ChromaPrint.cpp
//  EigenPlayer
//
//  Created by Ken Chen on 14-12-15.
//
//

#include "ChromaPrint.h"

MetaData::MetaData()
{
	chromaprint_ctx = chromaprint_new(algo);
	
}

void MetaData::addFile(File file)
{
	audioFiles.add(&file);
}

void MetaData::readAudio()
{
	for (int i=0; i<audioFiles.size(); ++i) {
		readerSource.add(new AudioFormatReaderSource(formatManager.createReaderFor(*audioFiles[i]),true));
	}
}