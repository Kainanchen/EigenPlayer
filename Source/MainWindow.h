//
//  MainWindow.h
//  EigenPlayer
//
//  Created by Ken Chen on 14-11-23.
//
//

#ifndef __EigenPlayer__MainWindow__
#define __EigenPlayer__MainWindow__
#include "../JuceLibraryCode/JuceHeader.h"
#include "MainComponent.h"

#endif /* defined(__EigenPlayer__MainWindow__) */

class MainWindow    : public DocumentWindow
{
public:
	MainWindow();
	
	void closeButtonPressed();
	
	/* Note: Be careful if you override any DocumentWindow methods - the base
	 class uses a lot of them, so by overriding you might break its functionality.
	 It's best to do all your work in your content component instead, but if
	 you really have to override any DocumentWindow methods, make sure your
	 subclass also calls the superclass's method.
	 */
	
private:
	JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (MainWindow)
};