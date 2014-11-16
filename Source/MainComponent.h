/*
 ==============================================================================
 
 This file was auto-generated!
 
 ==============================================================================
 */

#ifndef MAINCOMPONENT_H_INCLUDED
#define MAINCOMPONENT_H_INCLUDED

#include "../JuceLibraryCode/JuceHeader.h"
#include "MediaPlayer.h"

//==============================================================================
/*
 This component lives inside our window, and this is where you should put all
 your controls and content.
 */
class MainContentComponent   : public Component,public MenuBarModel
{
public:
    //==============================================================================
    MainContentComponent();
    void resized();
    StringArray getMenuBarNames();
    PopupMenu getMenuForIndex (int index, const String& name);
    void menuItemSelected (int menuID, int index);
    enum MenuIDs {
        OpenFile,
        AudioSettings,
        Exit,
        AudioDevice
    };
    
private:
    MediaPlayer player;
    MenuBarComponent menuBar;
    ApplicationProperties appProperties;
};


#endif  // MAINCOMPONENT_H_INCLUDED
