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

    setSize (200, getHeight()-200);

    //[Constructor] You can add your own custom stuff here..

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

}



//[MiscUserCode] You can add your own definitions of your custom methods or any other code here...
const Identifier PlayList::musicId = "musicId";
const Identifier PlayList::musicNameId = "musicNameId";
const Identifier PlayList::musicTypeId = "musicTypeId";
const Identifier PlayList::musicSingerId = "musicSingerId";
const Identifier PlayList::musicAlbumId = "musicAlbumId";
const Identifier PlayList::playlistId = "playlistId";
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
