//
//  SystemInfo.h
//  EigenPlayer
//
//  Created by Ken Chen on 14-11-24.
//
//

#ifndef EigenPlayer_SystemInfo_h
#define EigenPlayer_SystemInfo_h

#include "../JuceLibraryCode/JuceHeader.h"

static String getAllSystemInfo();

class SystemInfo  : public Component
{
public:
	SystemInfo();
	
	void paint (Graphics& g) override;
	
	void resized() override;
	
private:
	TextEditor resultsBox;
	
	JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (SystemInfo);
};



#endif
