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

#ifndef __JUCE_HEADER_2012ACE8108DD0B4__
#define __JUCE_HEADER_2012ACE8108DD0B4__

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
class ImagePlayControlBar  : public Component
{
public:
    //==============================================================================
    ImagePlayControlBar ();
    ~ImagePlayControlBar();

    //==============================================================================
    //[UserMethods]     -- You can add your own custom methods in this section.
    //[/UserMethods]

    // Binary resources:

	Image image_b_gear_png = ImageCache::getFromMemory (b_gear_png, b_gear_pngSize);
	Image image_b_loopPlay_png = ImageCache::getFromMemory (b_loopPlay_png, b_loopPlay_pngSize);
	Image image_b_orderedPlay_png = ImageCache::getFromMemory (b_orderedPlay_png, b_orderedPlay_pngSize);
	Image image_b_pause_png = ImageCache::getFromMemory (b_pause_png, b_pause_pngSize);
	Image image_b_play_png = ImageCache::getFromMemory (b_play_png, b_play_pngSize);
	Image image_b_playFastBackward_png = ImageCache::getFromMemory (b_playFastBackward_png, b_playFastBackward_pngSize);
	Image image_b_playFastForward_png = ImageCache::getFromMemory (b_playFastForward_png, b_playFastForward_pngSize);
	Image image_b_playNxt_png = ImageCache::getFromMemory (b_playNxt_png, b_playNxt_pngSize);
	Image image_b_playPrv_png = ImageCache::getFromMemory (b_playPrv_png, b_playPrv_pngSize);
	Image image_b_randomPlay_png = ImageCache::getFromMemory (b_randomPlay_png, b_randomPlay_pngSize);
	Image image_b_silence_png = ImageCache::getFromMemory (b_silence_png, b_silence_pngSize);
	Image image_b_singlePlay_png = ImageCache::getFromMemory (b_singlePlay_png, b_singlePlay_pngSize);
	Image image_b_volume_png = ImageCache::getFromMemory (b_volume_png, b_volume_pngSize);

private:
    //[UserVariables]   -- You can add your own custom variables in this section.
    //[/UserVariables]

    //==============================================================================
	static const char* b_gear_png;
	static const int b_gear_pngSize;
	static const char* b_loopPlay_png;
	static const int b_loopPlay_pngSize;
	static const char* b_orderedPlay_png;
	static const int b_orderedPlay_pngSize;
	static const char* b_pause_png;
	static const int b_pause_pngSize;
	static const char* b_play_png;
	static const int b_play_pngSize;
	static const char* b_playFastBackward_png;
	static const int b_playFastBackward_pngSize;
	static const char* b_playFastForward_png;
	static const int b_playFastForward_pngSize;
	static const char* b_playNxt_png;
	static const int b_playNxt_pngSize;
	static const char* b_playPrv_png;
	static const int b_playPrv_pngSize;
	static const char* b_randomPlay_png;
	static const int b_randomPlay_pngSize;
	static const char* b_silence_png;
	static const int b_silence_pngSize;
	static const char* b_singlePlay_png;
	static const int b_singlePlay_pngSize;
	static const char* b_volume_png;
	static const int b_volume_pngSize;

    //==============================================================================
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (ImagePlayControlBar)
};

//[EndFile] You can add extra defines here...
//[/EndFile]

#endif   // __JUCE_HEADER_2012ACE8108DD0B4__
