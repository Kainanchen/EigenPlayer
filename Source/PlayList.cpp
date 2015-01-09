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
    saveList->addListener (this);
    addAndMakeVisible (loadList = new TextButton ("loadList"));
    loadList->setButtonText (TRANS("Load Playlist"));
    loadList->addListener (this);
    setSize (200, getHeight()-200);
    //[Constructor] You can add your own custom stuff here..
    playlist = ValueTree (musicId);
    musicInfo  = ValueTree (musicId);
    musicInfo.setProperty(musicNameId, String::empty, nullptr);
    musicInfo.setProperty(musicTypeId, String::empty, nullptr);
    musicInfo.setProperty(musicSingerId, String::empty, nullptr);
    musicInfo.setProperty(musicAlbumId, String::empty, nullptr);
    playlist = ValueTree(playlistId);
//    playlist.addChild(musicInfo, 0, nullptr);
    playlist.addListener(this);
	
    //button to be added
    //[/Constructor]
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
    int controlHeight=20;
    int margin = 10;
    int width=getWidth()-margin*2;
    loadList->setBounds(margin, controlHeight+margin, width, controlHeight);
    saveList->setBounds(margin, margin, width, controlHeight);

}



//[MiscUserCode] You can add your own definitions of your custom methods or any other code here...
const Identifier PlayList::musicId = "musicId";
const Identifier PlayList::musicNameId = "musicNameId";
const Identifier PlayList::musicTypeId = "musicTypeId";
const Identifier PlayList::musicSingerId = "musicSingerId";
const Identifier PlayList::musicAlbumId = "musicAlbumId";
const Identifier PlayList::playlistId = "playlistId";

void PlayList::buttonClicked (Button* buttonThatWasClicked)
{
    //[UserbuttonClicked_Pre]
    //[/UserbuttonClicked_Pre]
    
    if(buttonThatWasClicked == loadList)
    {
        //[UserButtonCode_openButton] -- add your button handler code here..
        FileChooser chooser ("Select Playlist",File::nonexistent,"*.xml");
        if (chooser.browseForFileToOpen()) {
            Logger* log = Logger::getCurrentLogger();
            File file (chooser.getResult());
            XmlDocument xmlDoc(file);
            ScopedPointer<XmlElement>xml =xmlDoc.getDocumentElement();
            if (xml==nullptr) {
                log->writeToLog("XML error");
                return;
            }
            ValueTree newPlaylist (ValueTree::fromXml(*xml));

            playlist.copyPropertiesFrom(newPlaylist, nullptr);
            ValueTree newlist (newPlaylist.getChildWithName(musicId));
            ValueTree musicInfo (newPlaylist.getChildWithName(musicId));
            musicInfo.copyPropertiesFrom(newlist, nullptr);
        }
        //[/UserButtonCode_openButton]
    }
    else if (buttonThatWasClicked == saveList)
    {
        //[UserButtonCode_saveButton] -- add your button handler code here..
        FileChooser chooser("Save Playlist",File::nonexistent,"*.xml");
        if (chooser.browseForFileToSave(true)){
            File file (chooser.getResult());
            if (file.existsAsFile()) {
                file.moveToTrash();
            }
            FileOutputStream stream(file);
            ScopedPointer<XmlElement>xml = playlist.createXml();
            xml->writeToStream(stream, String::empty);
        }
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
