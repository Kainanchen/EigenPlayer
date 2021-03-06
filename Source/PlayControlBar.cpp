#include "PlayControlBar.h"


//[MiscUserDefs] You can add your own user definitions and misc code here...
//[/MiscUserDefs]

//==============================================================================
PlayControlBar::PlayControlBar ()
: playTime(0.0),
  volume(1.0)
{
	
	addAndMakeVisible (playButton = new ImageButton("Play"));
    playButton->addListener (this);
	playButton->setImages(false, true, true, image_b_play_png, 1.0f, Colours::transparentBlack, image_b_play_png, 1.0f, Colours::transparentBlack, image_b_play_png, 1.0f, Colours::transparentBlack);
	
    addAndMakeVisible (playPrvButton = new ImageButton ("Play Previous"));
    playPrvButton->addListener (this);
	playPrvButton->setImages(false, true, true, image_b_playPrv_png, 1.0f, Colours::transparentBlack, image_b_playPrv_png, 1.0f, Colours::transparentBlack, image_b_playPrv_png, 1.0f, Colours::transparentBlack);
	
	addAndMakeVisible (playNxtButton = new ImageButton ("Play Next"));
	playNxtButton->addListener (this);
	playNxtButton->setImages(false, true, true, image_b_playNxt_png, 1.0f, Colours::transparentBlack, image_b_playNxt_png, 1.0f, Colours::transparentBlack, image_b_playNxt_png, 1.0f, Colours::transparentBlack);
	
	addAndMakeVisible (playFastForwardButton = new ImageButton ("Play Fast Forward"));
	playFastForwardButton->addListener (this);
	playFastForwardButton->setImages(false, true, true, image_b_playFastForward_png, 1.0f, Colours::transparentBlack, image_b_playFastForward_png, 1.0f, Colours::transparentBlack, image_b_playFastForward_png, 1.0f, Colours::transparentBlack);

	addAndMakeVisible (volumeButton = new ImageButton ("Volume"));
	volumeButton->addListener (this);
	volumeButton->setImages(false, true, true, image_b_volume_png, 1.0f, Colours::transparentBlack, image_b_volume_png, 1.0f, Colours::transparentBlack, image_b_volume_png, 1.0f, Colours::transparentBlack);
	
	addAndMakeVisible (loopButton = new ImageButton ("Loop"));
	loopButton->addListener (this);
	loopButton->setImages(false, true, true, image_b_orderedPlay_png, 1.0f, Colours::transparentBlack, image_b_orderedPlay_png, 1.0f, Colours::transparentBlack, image_b_orderedPlay_png, 1.0f, Colours::transparentBlack);
	loopState = Ordered;
	
	addAndMakeVisible (settingsButton = new ImageButton ("Loop"));
	settingsButton->addListener (this);
	settingsButton->setImages(false, true, true, image_b_gear_png, 1.0f, Colours::transparentBlack, image_b_gear_png, 1.0f, Colours::transparentBlack, image_b_gear_png, 1.0f, Colours::transparentBlack);
	
	addAndMakeVisible(playTimeSlider = new Slider ("Play Time"));
	playTimeSlider->setTextBoxStyle(Slider::NoTextBox, true, 0, 0);
	playTimeSlider->getValueObject().referTo(playTime);
	playTimeSlider->setEnabled(false);
	playTimeSlider->addListener(this);

	addAndMakeVisible(volumeSlider = new Slider ("Volume"));
	volumeSlider->setTextBoxStyle(Slider::NoTextBox, true, 0, 0);
	volumeSlider->getValueObject().referTo(volume);
	volumeSlider->setRange(0.0, 1.0);
	volumeSlider->setEnabled(true);
	volumeSlider->addListener(this);
	
	addAndMakeVisible(timeLabel = new Label ("Play Time Label"));
	timeLabel->setColour(Label::textColourId, Colours::white);
	timeLabel->setText("00:00/00:00", dontSendNotification);
	timeLabel->setFont(Font(32));
	timeLabel->setEditable(false);
	
    //[UserPreSize]
    //[/UserPreSize]
	
    //[Constructor] You can add your own custom stuff here..
    playButton->setEnabled(false);
	playFastForwardButton->setEnabled(false);
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
    playPrvButton = nullptr;
}

//==============================================================================
void PlayControlBar::paint (Graphics& g)
{
    //g.fillAll (Colours::white);
}

void PlayControlBar::resized()
{
	playButton->setBounds(getWidth()/2-15, 0.7*getHeight()/2, 60, 60);
    playPrvButton->setBounds(getWidth()/2-105, 0.7*getHeight()/2+10, 60, 60);
	playFastForwardButton->setBounds(getWidth()/2+75, 0.7*getHeight()/2+10, 60, 60);
	playNxtButton->setBounds(getWidth()/2+165, 0.7*getHeight()/2+10, 60, 60);
	volumeButton->setBounds(40, 0.75*getHeight()/2, 60, 60);
	loopButton->setBounds(getWidth()/2+280, 0.7*getHeight()/2, 60, 60);
	settingsButton->setBounds(getWidth()-100, 0.7*getHeight()/2+5, 60, 60);
	volumeSlider->setBounds(90, 0.72*getHeight()/2, getWidth()/2-270, getHeight()/2);
	playTimeSlider->setBoundsRelative(0.025, 0, 0.95, 0.5);
	timeLabel->setBounds(getWidth()-300, 0.7*getHeight()/2+5, 140, 60);
}

void PlayControlBar::timerCallback()
{
	playTime = transportSource.getCurrentPosition();
	playTimeFormat = Time(playTimeSlider->getValue()*1000);
	currentPlayTimeString = playTimeFormat.formatted("%M:%S");
	timeLabel->setText(currentPlayTimeString+"/"+musicLengthTimeString, sendNotification);
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
    else if (buttonThatWasClicked == playPrvButton)
    {
        //[UserButtonCode_stopButton] -- add your button handler code here..
        if (Paused==state)
            changeState(Stopped);
        else
            changeState(Stopping);
        //[/UserButtonCode_stopButton]
    }
	else if (buttonThatWasClicked == volumeButton)
	{
		if (volumeSlider->getValue()==0) {
			volumeSlider->setValue(volumeBuffer);
		}
		else {
			volumeBuffer = volumeSlider->getValue();
			volumeSlider->setValue(0.0);
		}
	}
	else if (buttonThatWasClicked == loopButton)
	{
		if (loopState==Ordered) {
			loopButton->setImages(false, true, true, image_b_singlePlay_png, 1.0f, Colours::transparentBlack, image_b_singlePlay_png, 1.0f, Colours::transparentBlack, image_b_singlePlay_png, 1.0f, Colours::transparentBlack);
			loopState = Single;
		}
		else if (loopState==Single){
			loopButton->setImages(false, true, true, image_b_randomPlay_png, 1.0f, Colours::transparentBlack, image_b_randomPlay_png, 1.0f, Colours::transparentBlack, image_b_randomPlay_png, 1.0f, Colours::transparentBlack);
			loopState = Random;
		}
		else {
			loopButton->setImages(false, true, true, image_b_orderedPlay_png, 1.0f, Colours::transparentBlack, image_b_orderedPlay_png, 1.0f, Colours::transparentBlack, image_b_orderedPlay_png, 1.0f, Colours::transparentBlack);
			loopState = Ordered;
		}
	}
	else if (buttonThatWasClicked == settingsButton)
	{
		audioSettingsMenu();
	}
    //[UserbuttonClicked_Post]
    //[/UserbuttonClicked_Post]
}

void PlayControlBar::sliderValueChanged (Slider* sliderThatWasMoved)
{
	if (sliderThatWasMoved == playTimeSlider)
	{
		transportSource.setPosition(playTime.getValue());
	}
	
	if (sliderThatWasMoved == volumeSlider)
	{
		transportSource.setGain(volume.getValue());
		if (volumeSlider->getValue()==0) {
			volumeButton->setImages(false, true, true, image_b_silence_png, 1.0f, Colours::transparentBlack, image_b_silence_png, 1.0f, Colours::transparentBlack, image_b_silence_png, 1.0f, Colours::transparentBlack);
		}
		else {
			volumeButton->setImages(false, true, true, image_b_volume_png, 1.0f, Colours::transparentBlack, image_b_volume_png, 1.0f, Colours::transparentBlack, image_b_volume_png, 1.0f, Colours::transparentBlack);
		}
	}
}

Value PlayControlBar::getPlayTime()
{
	return playTime;
}

void PlayControlBar::playEnable(bool enable)
{
	playButton->setEnabled(enable);
}

void PlayControlBar::stopEnable(bool enable)
{
	playPrvButton->setEnabled(enable);
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
				readerSource = new AudioFormatReaderSource(formatManager.createReaderFor(musicFile),true);
				transportSource.setSource(readerSource);
				musicLength = transportSource.getLengthInSeconds();
				playTimeFormat = Time(musicLength*1000);
				musicLengthTimeString = playTimeFormat.formatted("%M:%S");
				playTimeSlider->setRange(0.0, musicLength);
				playEnable(true);
				playFastForwardButton->setEnabled(true);
				playTimeEnable(true);
				startTimer(1000/40);
				break;
			case Stopped:
                playButton->setImages(false, true, true, image_b_play_png, 1.0f, Colours::transparentBlack, image_b_play_png, 1.0f, Colours::transparentBlack, image_b_play_png, 1.0f, Colours::transparentBlack);
                transportSource.setPosition(0.0);
                break;
            case Starting:
                transportSource.start();
                break;
            case Playing:
                playButton->setImages(false, true, true, image_b_pause_png, 1.0f, Colours::transparentBlack, image_b_pause_png, 1.0f, Colours::transparentBlack, image_b_pause_png, 1.0f, Colours::transparentBlack);
                break;
            case Paused:
                playButton->setImages(false, true, true, image_b_play_png, 1.0f, Colours::transparentBlack, image_b_play_png, 1.0f, Colours::transparentBlack, image_b_play_png, 1.0f, Colours::transparentBlack);
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
