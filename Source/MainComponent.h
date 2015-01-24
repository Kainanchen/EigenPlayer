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
#include "Features.h"
#include "Stage.h"
#include "ChromaFingerPrint.h"

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
	void paint (Graphics& g);
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
	PlayList playList;
	Features features;
	Stage stage;
    MenuBarComponent menuBar;
    ApplicationProperties appProperties;
	Image f_OutFrameTop = ImageFileFormat::loadFrom(File("../../../../Images/f_OutFrameTop.png"));
	Image f_OutFrameBottom = ImageFileFormat::loadFrom(File("../../../../Images/f_OutFrameBottom.png"));
	Image f_OutFrameVertBar = ImageFileFormat::loadFrom(File("../../../../Images/f_OutFrameVertBar.png"));
};


#endif  // MAINCOMPONENT_H_INCLUDED
