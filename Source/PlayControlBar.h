#ifndef __JUCE_HEADER_DFFA593DF53AA53E__
#define __JUCE_HEADER_DFFA593DF53AA53E__

//[Headers]     -- You can add your own extra header files here --
#include "JuceHeader.h"
#include <math.h>
#include <iomanip>
#include <iostream>
using namespace std;
//[/Headers]



//==============================================================================

class PlayControlBar  : public Component,
						public Slider::Listener,
						public ButtonListener,
						public ChangeListener,
						private Timer

{
public:
    //==============================================================================
    PlayControlBar ();
    ~PlayControlBar();
    
    //==============================================================================
    //[UserMethods]     -- You can add your own custom methods in this section.
    enum TransportState {
		Load,
        Stopped,
        Starting,
        Playing,
        Pausing,
        Paused,
        Stopping
    };

	enum LoopState {
		Ordered,
		Single,
		Random
	};
	
    void paint (Graphics& g);
    void resized();
	
    void buttonClicked (Button* buttonThatWasClicked);
	void sliderValueChanged (Slider* sliderThatWasMoved);
	void changeState( TransportState newState);
	void changeListenerCallback (ChangeBroadcaster* source);
	void playEnable(bool enable);
	void stopEnable(bool enable);
	void playTimeEnable(bool enable);
	Value getPlayTime();
	
	void setMusicFile(File file);
	void audioSettingsMenu();
	//[/UserMethods]
	
    //[/UserVariables]

    //==============================================================================

	
private:
    
    //[UserVariables]   -- You can add your own custom variables in this section.
	Value playTime;
	Value volume;
	double musicLength;
	String musicLengthTime;
	float volumeBuffer = 0;
	File musicFile;
	Font timeFont = Font(24);
	ScopedPointer<ImageButton> playButton;
	ScopedPointer<ImageButton> prvButton;
	ScopedPointer<ImageButton> volumeButton;
	ScopedPointer<ImageButton> loopButton;
	ScopedPointer<ImageButton> settingsButton;
	ScopedPointer<Slider> playTimeSlider;
	ScopedPointer<Slider> volumeSlider;
	ScopedPointer<Label> timeLabel;
	AudioDeviceManager deviceManager;
	AudioFormatManager formatManager;
	ScopedPointer<AudioFormatReaderSource> readerSource;
	AudioTransportSource transportSource;
	AudioSourcePlayer sourcePlayer;
	TransportState state;
	LoopState loopState;
	Image playButtonImage = ImageFileFormat::loadFrom(File("../../../../Images/b_Play.png"));
	Image pauseButtonImage = ImageFileFormat::loadFrom(File("../../../../Images/b_Pause.png"));
	Image prvButtonImage = ImageFileFormat::loadFrom(File("../../../../Images/b_PlayPrv.png"));
	Image volumeButtonImage = ImageFileFormat::loadFrom(File("../../../../Images/b_Volume.png"));
	Image silenceButtonImage = ImageFileFormat::loadFrom(File("../../../../Images/b_Silence.png"));
	Image loopOrderedButtonImage = ImageFileFormat::loadFrom(File("../../../../Images/b_OrderedPlay.png"));
	Image loopSingleButtonImage = ImageFileFormat::loadFrom(File("../../../../Images/b_SinglePlay.png"));
	Image loopRandomButtonImage = ImageFileFormat::loadFrom(File("../../../../Images/b_RandomPlay.png"));
	Image settingsButtonImage = ImageFileFormat::loadFrom(File("../../../../Images/b_Gear.png"));
	void timerCallback() override;
	
    //==============================================================================
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (PlayControlBar)
};

//[EndFile] You can add extra defines here...
//[/EndFile]

#endif   // __JUCE_HEADER_DFFA593DF53AA53E__
