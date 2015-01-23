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
    playControlBar.setBounds(0, getHeight()-f_OutFrameBottom.getHeight()/1.5, getWidth(), f_OutFrameBottom.getHeight()/1.5);
	playList.setBounds(0,playList.getHeight(), playList.getWidth(), playList.getHeight());
#if JUCE_WINDOWS || JUCE_LINUX
	menuBar.setBounds(0, 0, getWidth(), 20);
#endif
}

void MainContentComponent::paint(Graphics& g)
{
	//backgroundImage = ImageFileFormat::loadFrom(File("../../../../Images/f_OutFrame.png"));

	g.drawImage(f_OutFrameTop, 0, 0, getWidth(), f_OutFrameTop.getHeight()/1.5, 0, 0, f_OutFrameTop.getWidth(), f_OutFrameTop.getHeight());
	g.drawImage(f_OutFrameBottom, 0, getHeight()-f_OutFrameBottom.getHeight()/1.5, getWidth(), f_OutFrameBottom.getHeight()/1.5, 0, 0, f_OutFrameTop.getWidth(), f_OutFrameTop.getHeight());
	g.drawImage(f_OutFrameVertBar, 0, f_OutFrameTop.getHeight()/1.5, f_OutFrameVertBar.getWidth()/1.5, f_OutFrameVertBar.getHeight()/1.5, 0, 0, f_OutFrameVertBar.getWidth(), f_OutFrameVertBar.getHeight());
	g.drawImage(f_OutFrameVertBar, getWidth()/22.5*4.6, f_OutFrameTop.getHeight()/1.5, f_OutFrameVertBar.getWidth()/1.5, f_OutFrameVertBar.getHeight()/1.5, 0, 0, f_OutFrameVertBar.getWidth(), f_OutFrameVertBar.getHeight());
	g.drawImage(f_OutFrameVertBar, getWidth()-f_OutFrameVertBar.getWidth()/1.5+1, f_OutFrameTop.getHeight()/1.5, f_OutFrameVertBar.getWidth()/1.5, f_OutFrameVertBar.getHeight()/1.5, 0, 0, f_OutFrameVertBar.getWidth(), f_OutFrameVertBar.getHeight());
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


