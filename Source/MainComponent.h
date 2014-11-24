/*
 ==============================================================================
 
 This file was auto-generated!
 
 ==============================================================================
 */

#ifndef MAINCOMPONENT_H_INCLUDED
#define MAINCOMPONENT_H_INCLUDED

#include "../JuceLibraryCode/JuceHeader.h"
#include "PlayControlBar.h"
#include "PlayList.h"

//==============================================================================
/*
 This component lives inside our window, and this is where you should put all
 your controls and content.
 */
class MainContentComponent   : public Component,
							   public MenuBarModel
{
public:
    //==============================================================================
    MainContentComponent();
	~MainContentComponent();
    void resized();
    StringArray getMenuBarNames();
    PopupMenu getMenuForIndex (int index, const String& name);
    void menuItemSelected (int menuID, int index);
	enum MenuIDs {
		OpenFile = 1000,
        SavePlayList,
		AudioSettings,
		Exit,
		AudioDevice
	};

    
private:
    PlayControlBar playControlBar;
	//PlayList playList;
    MenuBarComponent menuBar;
    ApplicationProperties appProperties;
};


#endif  // MAINCOMPONENT_H_INCLUDED
