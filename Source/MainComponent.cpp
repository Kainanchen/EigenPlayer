/*
 ==============================================================================
 
 This file was auto-generated!
 
 ==============================================================================
 */

#include "MainComponent.h"


//==============================================================================
MainContentComponent::MainContentComponent():menuBar(this)
{
    addAndMakeVisible(&player);
    setSize (player.getWidth(), player.getHeight());
    addAndMakeVisible(&menuBar);
    PropertiesFile::Options options;
    options.applicationName = ProjectInfo::projectName;
    options.folderName = ProjectInfo::projectName;
    options.filenameSuffix = "settings";
    options.osxLibrarySubFolder = "Application Support";
    appProperties.setStorageParameters(options);
    
//    PropertiesFile* props = appProperties.getUserSettings();
}
//MainContentComponent::~MainContentComponent(){
//     setMacMainMenu(0);
//}

void MainContentComponent::resized()
{
    player.setBounds(0, 0, getWidth(), getHeight());
    menuBar.setBounds(0, 0, getWidth(), 20);
}

StringArray MainContentComponent::getMenuBarNames(){
    const char* menuNames[]={"File","Audio",0};
    return StringArray (menuNames);
}

PopupMenu MainContentComponent::getMenuForIndex(int index, const String& name){
    PopupMenu menu;
    if (name=="File") {
        menu.addItem(OpenFile,"Open File...");
    }else if (name=="Audio"){
        menu.addItem(AudioSettings, "Audio Settings...");
    }
    return menu;
}

void MainContentComponent::menuItemSelected(int menuID, int index){
    switch (menuID) {
		case OpenFile: {
            FileChooser chooser ("Select a Wave file to play...",File::nonexistent);
            if (chooser.browseForFileToOpen()) {
                player.transportSource.setSource(nullptr);
                File file (chooser.getResult());
                player.readerSource=new AudioFormatReaderSource(player.formatManager.createReaderFor(file),true);
                player.transportSource.setSource(player.readerSource);
                player.playButton->setEnabled(true);
			}
			break;
		}
			
            
		case AudioSettings: {
                bool showMidiInputOptions=false;
                bool showMidiOutputSelector=false;
                bool showChannelsAsStereoPairs=true;
                bool hideAdvancedOptions=false;
                AudioDeviceSelectorComponent settings (player.deviceManager,0,0,1,2,showMidiInputOptions,showMidiOutputSelector,showChannelsAsStereoPairs,hideAdvancedOptions);
                settings.setSize(500, 400);
                DialogWindow::showModalDialog(String("Audio Settings"), &settings, TopLevelWindow::getTopLevelWindow(0), Colours::white, true);
				break;
		}
        
    }
}
