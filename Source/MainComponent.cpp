/*
 ==============================================================================
 
 This file was auto-generated!
 
 ==============================================================================
 */

#include "MainComponent.h"


//==============================================================================
MainContentComponent::MainContentComponent():menuBar(this)
{
#if JUCE_MAC
	MenuBarModel::setMacMainMenu (this);
#endif
    addAndMakeVisible(&playControlBar);
    setSize (playControlBar.getWidth(), playControlBar.getHeight());
    addAndMakeVisible(&menuBar);
    PropertiesFile::Options options;
    options.applicationName = ProjectInfo::projectName;
    options.folderName = ProjectInfo::projectName;
    options.filenameSuffix = "settings";
    options.osxLibrarySubFolder = "Application Support";
    appProperties.setStorageParameters(options);
    
//    PropertiesFile* props = appProperties.getUserSettings();
}
MainContentComponent::~MainContentComponent(){
#if JUCE_MAC
	MenuBarModel::setMacMainMenu (nullptr);
#endif
	PopupMenu::dismissAllActiveMenus();
}

void MainContentComponent::resized()
{
    playControlBar.setBounds(0, getHeight()-playControlBar.getHeight(), playControlBar.getWidth(), playControlBar.getHeight());
#if JUCE_WINDOWS || JUCE_LINUX
	menuBar.setBounds(0, 0, getWidth(), 20);
#endif
}

StringArray MainContentComponent::getMenuBarNames(){
    const char* menuNames[]={"File","Audio",0};
    return StringArray (menuNames);
}

PopupMenu MainContentComponent::getMenuForIndex(int index, const String& name){
    PopupMenu menu;
    if (name=="File") {
        menu.addItem(OpenFile,"Open File...");
        menu.addItem(SavePlayList,"Save to playlist...");
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
                playControlBar.transportSource.setSource(nullptr);
                File file (chooser.getResult());
                playControlBar.readerSource=new AudioFormatReaderSource(playControlBar.formatManager.createReaderFor(file),true);
                playControlBar.transportSource.setSource(playControlBar.readerSource);
                playControlBar.playButton->setEnabled(true);
                PlayControlBar::musicInfo = ValueTree(PlayControlBar::musicId);
                musicInfo.setProperty
			}
			break;
		}
        case SavePlayList:{
            FileChooser chooser("Save to playlist",File::nonexistent,"*.xml");
            if (chooser.browseForFileToSave(true)){
                File plfile (chooser.getResult());
                if (plfile.existsAsFile()) {
                    plfile.moveToTrash();
                }
                FileOutputStream stream(plfile);
                ScopedPointer<XmlElement>xml = personData.createXml();
                xml->writeToStream(stream, String::empty);
            }
        }
			
		case AudioSettings: {
                bool showMidiInputOptions=false;
                bool showMidiOutputSelector=false;
                bool showChannelsAsStereoPairs=true;
                bool hideAdvancedOptions=false;
                AudioDeviceSelectorComponent settings (playControlBar.deviceManager,0,0,1,2,showMidiInputOptions,showMidiOutputSelector,showChannelsAsStereoPairs,hideAdvancedOptions);
                settings.setSize(500, 400);
                DialogWindow::showModalDialog(String("Audio Settings"), &settings, TopLevelWindow::getTopLevelWindow(0), Colours::white, true);
				break;
		}
        
    }
}
