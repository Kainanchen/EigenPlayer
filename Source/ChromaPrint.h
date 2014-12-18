//
//  ChromaPrint.h
//  EigenPlayer
//
//  Created by Ken Chen on 14-12-15.
//
//

#ifndef __EigenPlayer__ChromaPrint__
#define __EigenPlayer__ChromaPrint__

#include "../Include/acoustid/chromaprint.h"
#include "../JuceLibraryCode/JuceHeader.h"

class MetaData

{
public:
	//==============================================================================
	MetaData();
	~MetaData();
	
	//==============================================================================
	//[UserMethods]     -- You can add your own custom methods in this section.
	
	void addFile(File file);
	void readAudio();
	
	//[/UserMethods]
	
	//[/UserVariables]
	
	//==============================================================================
	
	
private:
	int maxLength;
	int numFileNames;
	int duration;
	int algo = CHROMAPRINT_ALGORITHM_DEFAULT;
	OwnedArray<File> audioFiles;
	ChromaprintContext *chromaprint_ctx;
	AudioFormatManager formatManager;
	OwnedArray<AudioFormatReaderSource> readerSource;
};



#endif /* defined(__EigenPlayer__ChromaPrint__) */
