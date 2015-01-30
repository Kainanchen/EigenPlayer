#ifndef __JUCE_HEADER_DFFA593DF53AA53E__
#define __JUCE_HEADER_DFFA593DF53AA53E__

//[Headers]     -- You can add your own extra header files here --
#include "JuceHeader.h"
#include "ImagePlayControlBar.h"
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
	Time playTimeFormat;
	double musicLength;
	String musicLengthTimeString;
	String currentPlayTimeString;
	float volumeBuffer = 0;
	File musicFile;
	Font timeFont = Font(24);
	ScopedPointer<ImageButton> playButton;
	ScopedPointer<ImageButton> playPrvButton;
	ScopedPointer<ImageButton> playNxtButton;
	ScopedPointer<ImageButton> playFastForwardButton;
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
	ImagePlayControlBar imagePlayControlBar;
	Image image_b_gear_png = ImageCache::getFromMemory (imagePlayControlBar.b_gear_png, imagePlayControlBar.b_gear_pngSize);
	Image image_b_loopPlay_png = ImageCache::getFromMemory (imagePlayControlBar.b_loopPlay_png, imagePlayControlBar.b_loopPlay_pngSize);
	Image image_b_orderedPlay_png = ImageCache::getFromMemory (imagePlayControlBar.b_orderedPlay_png, imagePlayControlBar.b_orderedPlay_pngSize);
	Image image_b_pause_png = ImageCache::getFromMemory (imagePlayControlBar.b_pause_png, imagePlayControlBar.b_pause_pngSize);
	Image image_b_play_png = ImageCache::getFromMemory (imagePlayControlBar.b_play_png, imagePlayControlBar.b_play_pngSize);
	Image image_b_playFastBackward_png = ImageCache::getFromMemory (imagePlayControlBar.b_playFastBackward_png, imagePlayControlBar.b_playFastBackward_pngSize);
	Image image_b_playFastForward_png = ImageCache::getFromMemory (imagePlayControlBar.b_playFastForward_png, imagePlayControlBar.b_playFastForward_pngSize);
	Image image_b_playNxt_png = ImageCache::getFromMemory (imagePlayControlBar.b_playNxt_png, imagePlayControlBar.b_playNxt_pngSize);
	Image image_b_playPrv_png = ImageCache::getFromMemory (imagePlayControlBar.b_playPrv_png, imagePlayControlBar.b_playPrv_pngSize);
	Image image_b_randomPlay_png = ImageCache::getFromMemory (imagePlayControlBar.b_randomPlay_png, imagePlayControlBar.b_randomPlay_pngSize);
	Image image_b_silence_png = ImageCache::getFromMemory (imagePlayControlBar.b_silence_png, imagePlayControlBar.b_silence_pngSize);
	Image image_b_singlePlay_png = ImageCache::getFromMemory (imagePlayControlBar.b_singlePlay_png, imagePlayControlBar.b_singlePlay_pngSize);
	Image image_b_volume_png = ImageCache::getFromMemory (imagePlayControlBar.b_volume_png, imagePlayControlBar.b_volume_pngSize);
	
	void timerCallback() override;
	
    //==============================================================================
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (PlayControlBar)
};

//[EndFile] You can add extra defines here...
//[/EndFile]

#endif   // __JUCE_HEADER_DFFA593DF53AA53E__
