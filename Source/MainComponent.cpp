/*
 ==============================================================================
 
 This file was auto-generated!
 
 ==============================================================================
 */

#include "MainComponent.h"


//==============================================================================
MainContentComponent::MainContentComponent()
:menuBar(this)
{
#if JUCE_MAC
	MenuBarModel::setMacMainMenu (this);
#endif
    addAndMakeVisible(&playControlBar);
	addAndMakeVisible(&playList);
    addAndMakeVisible(&menuBar);
    PropertiesFile::Options options;
    options.applicationName = ProjectInfo::projectName;
    options.folderName = ProjectInfo::projectName;
    options.filenameSuffix = "settings";
    options.osxLibrarySubFolder = "Application Support";
    appProperties.setStorageParameters(options);
//    PropertiesFile* props = appProperties.getUserSettings();
	
	//setSize (playControlBar.getWidth(), playControlBar.getHeight());
	setSize(1600,1000);
}

MainContentComponent::~MainContentComponent()
{
#if JUCE_MAC
	MenuBarModel::setMacMainMenu (nullptr);
#endif
	PopupMenu::dismissAllActiveMenus();
}

void MainContentComponent::resized()
{
    playControlBar.setBounds(0, 11*getHeight()/12, getWidth(), playControlBar.getHeight());
	playList.setBounds(0,playList.getHeight(), playList.getWidth(), playList.getHeight());
#if JUCE_WINDOWS || JUCE_LINUX
	menuBar.setBounds(0, 0, getWidth(), 20);
#endif
}

void MainContentComponent::paint(Graphics& g)
{
	backgroundImage = ImageFileFormat::loadFrom(File("/Users/HarmoniCache/Documents/Projects/EigenPlayer/Images/f_OutFrame.png"));
	g.drawImage(backgroundImage, 0, 0, getWidth(), getHeight(), 0, 0, backgroundImage.getWidth(), backgroundImage.getHeight(), false );
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
                File file(chooser.getResult());
				//ChromaFingerPrint cfp;
				//cfp.calculateFingerPrint(file);
				playControlBar.setMusicFile(file);
				playControlBar.changeState(PlayControlBar::Load);
			}
			break;
		}
		//PlayControlBar::musicInfo = ValueTree(PlayControlBar::musicId);
		//musicInfo.setProperty
        case SavePlayList:{
            FileChooser chooser("Save to playlist",File::nonexistent,"*.xml");
            if (chooser.browseForFileToSave(true)){
                File plfile (chooser.getResult());
                if (plfile.existsAsFile()) {
                    plfile.moveToTrash();
                }
                FileOutputStream stream(plfile);
                //ScopedPointer<XmlElement>xml = personData.createXml();
                //xml->writeToStream(stream, String::empty);
            }
        }
			
		case AudioSettings: {
				playControlBar.audioSettingsMenu();
				break;
		}
        
    }
}


