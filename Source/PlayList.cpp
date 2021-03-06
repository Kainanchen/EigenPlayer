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
    addAndMakeVisible(newsublist = new TextButton ("New Playlist"));
    newsublist->setButtonText(TRANS("New Playlist"));
    newsublist->addListener(this);
    
    addAndMakeVisible (saveList = new TextButton ("saveList"));
    saveList->setButtonText (TRANS("Save Playlist"));
    saveList->addListener (this);
    
    addAndMakeVisible (loadList = new TextButton ("loadList"));
    loadList->setButtonText (TRANS("Load Playlist"));
    loadList->addListener (this);
    
    addAndMakeVisible (path = new TextButton ("musicpath"));
    path->setButtonText(TRANS("Select music"));
    path->addListener(this);
    
    addAndMakeVisible(savesublist = new TextButton ("savesub"));
                      savesublist->setButtonText(TRANS("savesub"));
    addAndMakeVisible (musicname = new Label ("new label",
                                              TRANS("musicname")));
    musicname->setEditable(true,true,true);
    musicname->addListener(this);
    addAndMakeVisible (sublistname = new Label ("new label",
                                              TRANS("sublistname")));
    sublistname->setEditable(true,true,true);
    sublistname->addListener(this);
    savesublist->addListener(this);
    //[Constructor] You can add your own custom stuff here..

	playlist = ValueTree (playlistId);
    sublist = ValueTree (sublistId);
    music = ValueTree (musicId);
    musicInfo  = ValueTree (musicinfoId);
    musicpath = ValueTree(pathId);
    playlist.addListener(this);
    sublist.addListener(this);
    music.addListener(this);
    musicInfo.addListener(this);
    musicpath.addListener(this);

	musicInfo.setProperty(musicNameId, String::empty, nullptr);
    musicInfo.setProperty(musicTypeId, String::empty, nullptr);
    musicInfo.setProperty(musicSingerId, String::empty, nullptr);
    musicInfo.setProperty(musicAlbumId, String::empty, nullptr);
    musicpath.setProperty(musicId, String::empty, nullptr);
    music.addChild(musicInfo, 0, nullptr);
    music.addChild(musicpath, 0, nullptr);
    music.setProperty(musicId, String::empty, nullptr);
   // music.setProperty(musicId, "try", nullptr);
    sublist.addChild(music, 0, nullptr);
    sublist.setProperty(sublistId, "try1", nullptr);
    sublist.setProperty(sublistId, String::empty, nullptr);
    playlist.addChild(sublist, 0, nullptr);
    playlist.setProperty(playlistId, String::empty, nullptr);
//    playlist.addChild(musicInfo, 0, nullptr);
//    playlist.addListener(this);
	
    //button to be added
    //[/Constructor]
    setSize (200, 100);
}

PlayList::~PlayList()
{
    //[Destructor_pre]. You can add your own custom destruction code here..
    //[/Destructor_pre]
	loadList = nullptr;
	saveList = nullptr;
    savesublist = nullptr;
    musicname = nullptr;
    sublistname = nullptr;
    path = nullptr;
    newsublist = nullptr;
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
    loadList->setBounds(0, getHeight()/6, getWidth(), getHeight()/6);
    saveList->setBounds(0, 0, getWidth(), getHeight()/6);
    newsublist->setBounds(0, getHeight()*2/6, getWidth(), getHeight()/6);
    musicname->setBounds(0, getHeight()*3/6, getWidth(), getHeight()/6);
    sublistname->setBounds(0, getHeight()*4/6, getWidth(), getHeight()/6);
    path->setBounds(0, getHeight()*5/6, getWidth(), getHeight()/6);
    
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
const Identifier PlayList::testId = "testId";
const Identifier PlayList::pathId = "pathId";

void PlayList::buttonClicked (Button* buttonThatWasClicked)
{
    //[UserbuttonClicked_Pre]
    //[/UserbuttonClicked_Pre]
    
    if(buttonThatWasClicked == loadList)
    {
      
        getlist();

        Logger* log = Logger::getCurrentLogger();
        String testtext= sublist.getProperty(sublistId);
        log->writeToLog(testtext);
        log->writeToLog("test");
    }
    else if (buttonThatWasClicked == saveList)
    {
        setlist();

    }
    else if (buttonThatWasClicked == savesublist)
    {

       String testsubId= sublist.getProperty(sublistId);

        
       String testmusicId = music.getProperty(musicId);
        ValueTree newsublist = setsublist(testsubId, testmusicId);

        Logger* log = Logger::getCurrentLogger();
        log->writeToLog(testmusicId);
        log->writeToLog(testsubId);
        playlist.addChild(newsublist, 0, nullptr);
    }
    else if (buttonThatWasClicked == path){
        FileChooser chooser ("Select Music",File::nonexistent);
        if (chooser.browseForFileToOpen()) {
            File file (chooser.getResult());
            String musicname=file.getFileName();
            File path(file.getCurrentWorkingDirectory());
            String actpath= (file.getFullPathName());
            
            ValueTree newmusic= ValueTree(musicId);
            ValueTree newmusicpath = ValueTree(pathId);
            newmusic.addListener(this);
            newmusicpath.addListener(this);
            newmusic.addChild(newmusicpath, 0, nullptr);
            newmusicpath.setProperty(pathId, actpath, nullptr);
            newmusic.setProperty(musicId, musicname, nullptr);
            //ValueTree newsublist = ValueTree(sublistId);
            //newsublist.addListener(this);
            //newsublist.setProperty(sublistId, "New Playlist", nullptr);
            sublist.addChild(newmusic,0, nullptr);
        }
        
       
    }
    else if (buttonThatWasClicked == newsublist)
    {
        NativeMessageBox::showMessageBox(AlertWindow::QuestionIcon, "New Playlist Name", "Please input a new playlist name",testlabel);
        testlabel->setEditable(true,true,true);
        testlabel->addListener(this);
    }
    
}

void PlayList::labelTextChanged(Label* labelThatWasChanged)
{
  if (labelThatWasChanged == musicname) {
        music.setProperty(musicId, labelThatWasChanged->getText(), nullptr);
      
      String mid = music.getProperty(musicId);
      Logger* log = Logger::getCurrentLogger();
      log->writeToLog(mid);
    }
   else if (labelThatWasChanged == sublistname) {
        sublist.setProperty(sublistId, labelThatWasChanged->getText(), nullptr);
    }
   else if (labelThatWasChanged == testlabel){
    
   }
}

void PlayList::valueTreePropertyChanged(ValueTree& tree, const Identifier& property)
{
    if (property==musicId) {
        musicname->setText(tree.getProperty(property), dontSendNotification);
    }
    else if (property==sublistId){
        sublistname->setText(tree.getProperty(property), dontSendNotification);
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
