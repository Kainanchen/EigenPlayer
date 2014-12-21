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

class ChromaFingerPrint

{
public:
	//==============================================================================
	ChromaFingerPrint();
	~ChromaFingerPrint();
	
	//==============================================================================
	//[UserMethods]     -- You can add your own custom methods in this section.
	
	String calculateFingerPrint(File audioFile);
	
	//[/UserMethods]
	
	//[/UserVariables]
	
	//==============================================================================
	
	
private:
	AudioFormatManager formatManager;
	ChromaprintContext *chromaprintContext;
};



#endif /* defined(__EigenPlayer__ChromaPrint__) */
