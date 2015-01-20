#ifndef __JUCE_HEADER_DFFA593DF53AA53E__
#define __JUCE_HEADER_DFFA593DF53AA53E__

//[Headers]     -- You can add your own extra header files here --
#include "JuceHeader.h"
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
	double musicLength;
	File musicFile;
	//ScopedPointer<TextButton> playButton;
	ScopedPointer<ImageButton> playButton;
	ScopedPointer<TextButton> stopButton;
	ScopedPointer<Slider> playTimeSlider;
	AudioDeviceManager deviceManager;
	AudioFormatManager formatManager;
	ScopedPointer<AudioFormatReaderSource> readerSource;
	AudioTransportSource transportSource;
	AudioSourcePlayer sourcePlayer;
	TransportState state;
	
	void timerCallback() override;
	
    //==============================================================================
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (PlayControlBar)
};

//[EndFile] You can add extra defines here...
//[/EndFile]

#endif   // __JUCE_HEADER_DFFA593DF53AA53E__
