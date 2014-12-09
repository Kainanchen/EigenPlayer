#include "PlayControlBar.h"


//[MiscUserDefs] You can add your own user definitions and misc code here...
//[/MiscUserDefs]

//==============================================================================
PlayControlBar::PlayControlBar ()
: playTime(0.0)
{
    
    addAndMakeVisible (playButton = new TextButton ("Play"));
    playButton->addListener (this);
    playButton->setColour (TextButton::buttonColourId, Colours::chartreuse);
    
    addAndMakeVisible (stopButton = new TextButton ("Stop"));
    stopButton->addListener (this);
    stopButton->setColour (TextButton::buttonColourId, Colours::red);

	addAndMakeVisible(playTimeSlider = new Slider ("Play Time"));
	playTimeSlider->setTextBoxStyle(Slider::NoTextBox, true, 0, 0);
	playTimeSlider->getValueObject().referTo(playTime);
	playTimeSlider->setEnabled(false);
	//playTimeSlider.addListener(this);

    //[UserPreSize]
    //[/UserPreSize]
    
    setSize (500, 25);
	
    //[Constructor] You can add your own custom stuff here..
    playButton->setEnabled(false);
    stopButton->setEnabled(false);
    formatManager.registerBasicFormats();
    sourcePlayer.setSource(&transportSource);
    deviceManager.addAudioCallback(&sourcePlayer);
    deviceManager.initialise(0, 2, nullptr, true);
    deviceManager.addChangeListener(this);
    transportSource.addChangeListener(this);
    state=Stopped;
    //[/Constructor]
}

PlayControlBar::~PlayControlBar()
{
    playButton = nullptr;
    stopButton = nullptr;
}

//==============================================================================
void PlayControlBar::paint (Graphics& g)
{
    g.fillAll (Colours::white);
}

void PlayControlBar::resized()
{
	playButton->setBoundsRelative(0, 0, 0.125, 1);
    stopButton->setBoundsRelative (0.125, 0, 0.125, 1);
	playTimeSlider->setBoundsRelative(0.25, 0, 0.75, 1);
}

void PlayControlBar::timerCallback()
{
	
}

void PlayControlBar::buttonClicked (Button* buttonThatWasClicked)
{
    //[UserbuttonClicked_Pre]
    //[/UserbuttonClicked_Pre]
    
    if (buttonThatWasClicked == playButton)
    {
        //[UserButtonCode_playButton] -- add your button handler code here..
        //[UserButtonCode_textButton] -- add your button handler code here..
        if ((Stopped==state)||(Paused==state)||(Load==state))
            changeState(Starting);
        else if(Playing==state)
            changeState(Pausing);
        
        //[/UserButtonCode_textButton]
        //[/UserButtonCode_playButton]
    }
    else if (buttonThatWasClicked == stopButton)
    {
        //[UserButtonCode_stopButton] -- add your button handler code here..
        if (Paused==state)
            changeState(Stopped);
        else
            changeState(Stopping);
        //[/UserButtonCode_stopButton]
    }
    //[UserbuttonClicked_Post]
    //[/UserbuttonClicked_Post]
}
/*
void PlayControlBar::sliderValueChanged (Slider* sliderThatWasMoved)
{
	if (sliderThatWasMoved == &playTimeSlider)
	{
		playTimeSlider.setRange(0, 100);
	}
}
*/
void PlayControlBar::playEnable(bool enable)
{
	playButton->setEnabled(enable);
}

void PlayControlBar::stopEnable(bool enable)
{
	stopButton->setEnabled(enable);
}

void PlayControlBar::playTimeEnable(bool enable)
{
	playTimeSlider->setEnabled(enable);
}

void PlayControlBar::setMusicFile(File file)
{
	musicFile = file;
}

void PlayControlBar::audioSettingsMenu()
{
	bool showMidiInputOptions=false;
	bool showMidiOutputSelector=false;
	bool showChannelsAsStereoPairs=true;
	bool hideAdvancedOptions=false;
	AudioDeviceSelectorComponent settings (deviceManager,0,0,1,2,showMidiInputOptions,showMidiOutputSelector,showChannelsAsStereoPairs,hideAdvancedOptions);
	settings.setSize(500, 400);
	DialogWindow::showModalDialog(String("Audio Settings"), &settings, TopLevelWindow::getTopLevelWindow(0), Colours::white, true);
}


//[MiscUserCode] You can add your own definitions of your custom methods or any other code here...
void PlayControlBar::changeListenerCallback(ChangeBroadcaster* src){
    if (&deviceManager==src) {
        AudioDeviceManager::AudioDeviceSetup setup;
        deviceManager.getAudioDeviceSetup(setup);
        if (setup.outputChannels.isZero()) {
            sourcePlayer.setSource(nullptr);
        }else
            sourcePlayer.setSource(&transportSource);
    }else if (&transportSource==src){
        if (transportSource.isPlaying()) {
            changeState(Playing);
        }else{
            if ((Stopping==state)||(Playing==state))
                changeState(Stopped);
            else if (Pausing==state)
                changeState(Paused);
            
        }
    }
}

void PlayControlBar::changeState(TransportState newState){
    if (state != newState) {
        state = newState;
        switch (state) {
			case Load:
				transportSource.setSource(nullptr);
				readerSource=new AudioFormatReaderSource(formatManager.createReaderFor(musicFile),true);
				transportSource.setSource(readerSource);
				musicLength = transportSource.getLengthInSeconds();
				playTimeSlider->setRange(0.0, musicLength);
				playEnable(true);
				playTimeEnable(true);
				break;
			case Stopped:
                playButton->setButtonText("Play");
                stopButton->setButtonText("Stop");
                stopButton->setEnabled(false);
                transportSource.setPosition(0.0);
                break;
            case Starting:
                transportSource.start();
                break;
            case Playing:
                playButton->setButtonText("Paused");
                stopButton->setButtonText("Stop");
                stopButton->setEnabled(true);
                break;
            case Paused:
                playButton->setButtonText("Resume");
                stopButton->setButtonText("Return to zero");
                break;
            case Stopping:
                transportSource.stop();
                break;
            case Pausing:
                transportSource.stop();
                break;
                
        }
    }
}
//[/MiscUserCode]


//==============================================================================
#if 0
/*  -- Introjucer information section --
 
 This is where the Introjucer stores the metadata that describe this GUI layout, so
 make changes in here at your peril!
 
 BEGIN_JUCER_METADATA
 
 <JUCER_COMPONENT documentType="Component" className="MediaPlayer" componentName=""
 parentClasses="public Component, public ChangeListener" constructorParams=""
 variableInitialisers="" snapPixels="8" snapActive="1" snapShown="1"
 overlayOpacity="0.330" fixedSize="0" initialWidth="600" initialHeight="400">
 <BACKGROUND backgroundColour="ffffffff"/>
 <TEXTBUTTON name="Play" id="29bf7dc4c9a485f0" memberName="playButton" virtualName=""
 explicitFocusOrder="0" pos="-40 32 -74M 24" bgColOff="ff7fff00"
 buttonText="Play" connectedEdges="0" needsCallback="1" radioGroupId="0"/>
 <TEXTBUTTON name="Stop" id="813be0993bfb2f7b" memberName="stopButton" virtualName=""
 explicitFocusOrder="0" pos="-40 64 -74M 24" bgColOff="ffff0000"
 buttonText="Stop" connectedEdges="0" needsCallback="1" radioGroupId="0"/>
 <TEXTBUTTON name="Open Files" id="1746fc4fd3a1573f" memberName="openButton"
 virtualName="" explicitFocusOrder="0" pos="-40 0 -74M 24" buttonText="Open..."
 connectedEdges="0" needsCallback="1" radioGroupId="0"/>
 <TEXTBUTTON name="Configure audio" id="da5b9499212ed60d" memberName="settingButton"
 virtualName="" explicitFocusOrder="0" pos="-40 96 -74M 24" buttonText="Audio Settings..."
 connectedEdges="0" needsCallback="1" radioGroupId="0"/>
 </JUCER_COMPONENT>
 
 END_JUCER_METADATA
 */
#endif


//[EndFile] You can add extra defines here...
//[/EndFile]
