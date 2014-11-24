#ifndef __JUCE_HEADER_DFFA593DF53AA53E__
#define __JUCE_HEADER_DFFA593DF53AA53E__

//[Headers]     -- You can add your own extra header files here --
#include "JuceHeader.h"
//[/Headers]



//==============================================================================
/**
 //[Comments]
 An auto-generated component, created by the Introjucer.
 
 Describe your class and how it works here!
 //[/Comments]
 */
class PlayControlBar  : public Component,
						//public Slider::Listener,
						public ButtonListener,
						public ChangeListener

{
public:
    //==============================================================================
    PlayControlBar ();
    ~PlayControlBar();
    
    //==============================================================================
    //[UserMethods]     -- You can add your own custom methods in this section.
    enum TransportState {
        Stopped,
        Starting,
        Playing,
        Pausing,
        Paused,
        Stopping
    };
    void changeState( TransportState newState);
    void changeListenerCallback (ChangeBroadcaster* source);
    void paint (Graphics& g);
    void resized();
    void buttonClicked (Button* buttonThatWasClicked);
	//void sliderValueChanged (Slider* sliderThatWasMoved);
	void playEnable(bool enable);
	void stopEnable(bool enable);
	//[/UserMethods]
	
    //[/UserVariables]
	AudioDeviceManager deviceManager;
	AudioFormatManager formatManager;
	ScopedPointer<AudioFormatReaderSource> readerSource;
	AudioTransportSource transportSource;
	AudioSourcePlayer sourcePlayer;
	TransportState state;
    //==============================================================================



    
private:
    
    //[UserVariables]   -- You can add your own custom variables in this section.
	
	ScopedPointer<TextButton> playButton;
	ScopedPointer<TextButton> stopButton;
	ScopedPointer<Slider> playTimeSlider;

	
    //==============================================================================
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (PlayControlBar)
};

//[EndFile] You can add extra defines here...
//[/EndFile]

#endif   // __JUCE_HEADER_DFFA593DF53AA53E__
