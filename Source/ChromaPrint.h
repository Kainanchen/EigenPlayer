//
//  ChromaPrint.h
//  EigenPlayer
//
//  Created by Ken Chen on 14-12-15.
//
//

#ifndef __EigenPlayer__ChromaPrint__
#define __EigenPlayer__ChromaPrint__

#include "chromaprint.h"

class MetaData

{
public:
	//==============================================================================
	MetaData();
	~MetaData();
	
	//==============================================================================
	//[UserMethods]     -- You can add your own custom methods in this section.
	
	//[/UserMethods]
	
	//[/UserVariables]
	
	//==============================================================================
	
	
private:
	int maxLength;
	int numFileNames;
	int raw;
	int rawFingerPrintSize;
	int duration;
	int algo;
	
};



#endif /* defined(__EigenPlayer__ChromaPrint__) */
