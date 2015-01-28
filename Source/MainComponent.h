/*
 ==============================================================================
 
 This file was auto-generated!
 
 ==============================================================================
 */

#ifndef MAINCOMPONENT_H_INCLUDED
#define MAINCOMPONENT_H_INCLUDED

#include "../JuceLibraryCode/JuceHeader.h"
#include "ImageMainComponent.h"
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
	Stage stage;
	Features features;
    MenuBarComponent menuBar;
    ApplicationProperties appProperties;
	ImageMainComponent imageMainComponent;
	Image f_OutFrameVertBar = ImageCache::getFromMemory(imageMainComponent.f_outFrameVertBar_png, imageMainComponent.f_outFrameVertBar_pngSize);
	Image f_OutFrameBottom = ImageCache::getFromMemory(imageMainComponent.f_outFrameBottom_png, imageMainComponent.f_outFrameBottom_pngSize);
	Image f_OutFrameTop = ImageCache::getFromMemory(imageMainComponent.f_outFrameTop_png, imageMainComponent.f_outFrameTop_pngSize);
};


#endif  // MAINCOMPONENT_H_INCLUDED
