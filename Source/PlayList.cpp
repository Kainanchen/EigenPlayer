/*
  ==============================================================================

  This is an automatically generated GUI class created by the Introjucer!

  Be careful when adding custom code to these files, as only the code within
  the "//[xyz]" and "//[/xyz]" sections will be retained when the file is loaded
  and re-saved.

  Created with Introjucer version: 3.1.0

  ------------------------------------------------------------------------------

  The Introjucer is part of the JUCE library - "Jules' Utility Class Extensions"
  Copyright 2004-13 by Raw Material Software Ltd.

  ==============================================================================
*/

//[Headers] You can add your own extra header files here...
//[/Headers]

#include "PlayList.h"


//[MiscUserDefs] You can add your own user definitions and misc code here...
//[/MiscUserDefs]

//==============================================================================
PlayList::PlayList ()
{

    //[UserPreSize]
    //[/UserPreSize]
    
    addAndMakeVisible (saveList = new TextButton ("saveList"));
    saveList->setButtonText (TRANS("Save Playlist"));
    //saveList->addListener (this);
    addAndMakeVisible (loadList = new TextButton ("loadList"));
    loadList->setButtonText (TRANS("Load Playlist"));
    //loadList->addListener (this);
    
    //[Constructor] You can add your own custom stuff here..

	playlist = ValueTree (playlistId);
    sublist = ValueTree (sublistId);
    music = ValueTree (musicId);
    musicInfo  = ValueTree (musicinfoId);

	musicInfo.setProperty(musicNameId, String::empty, nullptr);
    musicInfo.setProperty(musicTypeId, String::empty, nullptr);
    musicInfo.setProperty(musicSingerId, String::empty, nullptr);
    musicInfo.setProperty(musicAlbumId, String::empty, nullptr);
    music.addChild(musicInfo, 0, nullptr);
    sublist.addChild(music, 0, nullptr);
    playlist.addChild(sublist, 0, nullptr);
//    playlist.addChild(musicInfo, 0, nullptr);
//    playlist.addListener(this);
	
    //button to be added
    //[/Constructor]
    setSize (200, 40);
}

PlayList::~PlayList()
{
    //[Destructor_pre]. You can add your own custom destruction code here..
    //[/Destructor_pre]
	loadList = nullptr;
	saveList = nullptr;


    //[Destructor]. You can add your own custom destruction code here..
    //[/Destructor]
}

//==============================================================================
void PlayList::paint (Graphics& g)
{
    //[UserPrePaint] Add your own custom painting code here..
    //[/UserPrePaint]

    g.fillAll (Colours::white);

    //[UserPaint] Add your own custom painting code here..
    //[/UserPaint]
}

void PlayList::resized()
{
    loadList->setBounds(0, getHeight()/2, getWidth(), getHeight()/2);
    saveList->setBounds(0, 0, getWidth(), getHeight()/2);
}



//[MiscUserCode] You can add your own definitions of your custom methods or any other code here...
const Identifier PlayList::musicId = "musicId";
const Identifier PlayList::musicNameId = "musicNameId";
const Identifier PlayList::musicTypeId = "musicTypeId";
const Identifier PlayList::musicSingerId = "musicSingerId";
const Identifier PlayList::musicAlbumId = "musicAlbumId";
const Identifier PlayList::playlistId = "playlistId";
const Identifier PlayList::sublistId = "sublistId";
const Identifier PlayList::musicinfoId = "musicinfoId";

void PlayList::buttonClicked (Button* buttonThatWasClicked)
{
    //[UserbuttonClicked_Pre]
    //[/UserbuttonClicked_Pre]
    
    if(buttonThatWasClicked == loadList)
    {
        //[UserButtonCode_openButton] -- add your button handler code here..
      //  FileChooser chooser ("Select Playlist",File::nonexistent,"*.xml");
      //  if (chooser.browseForFileToOpen()) {
            //Logger* log = Logger::getCurrentLogger(); //这个粘过来干蛋。。。。
      //      File file (chooser.getResult()); //咱们这个固定路径，后台直接自动载入，不弹窗选文件
        char path[100];
        sprintf(path, "./playlist/default.xml");
        char mode[5];
      //  sprintf(mode, "r");
      //  std::ifstream pl;
            File file (path);
            XmlDocument xmlDoc(file);
            ScopedPointer<XmlElement>xml =xmlDoc.getDocumentElement();
            ValueTree newPlaylist (ValueTree::fromXml(*xml));
            ValueTree newsublist (newPlaylist.getChildWithName(sublistId));
            ValueTree newmusic (newsublist.getChildWithName(musicId));
            ValueTree newmusicInfo (newmusic.getChildWithName(musicinfoId));
            playlist.copyPropertiesFrom(newPlaylist, nullptr);
            sublist.copyPropertiesFrom(newsublist, nullptr);
            music.copyPropertiesFrom(newmusic, nullptr);
            musicInfo.copyPropertiesFrom(newmusicInfo, nullptr);
        
        //}
        //[/UserButtonCode_openButton]
    }
    else if (buttonThatWasClicked == saveList)
    {
        //[UserButtonCode_saveButton] -- add your button handler code here..
       // FileChooser chooser("Save Playlist",File::nonexistent,"*.xml"); //同理，固定路径，不检查
        //if (chooser.browseForFileToSave(true)){
       //     File file (chooser.getResult());
        //    if (file.existsAsFile()) {
         //       file.moveToTrash();
         //   }
        char path[100];
        sprintf(path,"./playList/default.xml");
        File file (path);
            FileOutputStream stream(file);
            ScopedPointer<XmlElement>xml = playlist.createXml();
            xml->writeToStream(stream, String::empty);
       // }
        //[/UserButtonCode_saveButton]
    }
}

//[/MiscUserCode]


//==============================================================================
#if 0
/*  -- Introjucer information section --

    This is where the Introjucer stores the metadata that describe this GUI layout, so
    make changes in here at your peril!

BEGIN_JUCER_METADATA

<JUCER_COMPONENT documentType="Component" className="PlayList" componentName=""
                 parentClasses="public Component" constructorParams="" variableInitialisers=""
                 snapPixels="8" snapActive="1" snapShown="1" overlayOpacity="0.330"
                 fixedSize="0" initialWidth="600" initialHeight="400">
  <BACKGROUND backgroundColour="ffffffff"/>
</JUCER_COMPONENT>

END_JUCER_METADATA
*/
#endif


//[EndFile] You can add extra defines here...
//[/EndFile]
