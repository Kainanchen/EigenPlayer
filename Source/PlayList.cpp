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

    setSize (600, 400);
	//    addAndMakeVisible(playListButton=new TextButton("Save to playlist"));
	//    playListButton->addListener(this);
	//    playListButton->setColour(TextButton::buttonColourId, Colours::chocolate);
	
	
	//    addAndMakeVisible (openButton = new TextButton ("Open Files"));
	//    openButton->setButtonText (TRANS("Open..."));
	//    openButton->addListener (this);
	
	//    addAndMakeVisible (settingsButton = new TextButton ("Configure audio"));
	//    settingsButton->setButtonText (TRANS("Audio Settings..."));
	//    settingsButton->addListener (this);

    //[Constructor] You can add your own custom stuff here..
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
    //[UserResized] Add your own custom resize handling here..
	//    playListButton->setBounds(200, 96, 40, 24);
	//// Stashed changes:Builds/MacOSX/MediaPlayer.cpp
 //   openButton->setBounds (-40, 0, getWidth() - -74, 24);
	//    settingsButton->setBounds (-40, 96, getWidth() - -74, 24);
    //[/UserResized]
}



//[MiscUserCode] You can add your own definitions of your custom methods or any other code here...
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