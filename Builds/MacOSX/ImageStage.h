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

#ifndef __JUCE_HEADER_8630F8037A5353AE__
#define __JUCE_HEADER_8630F8037A5353AE__

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
class ImageStage  : public Component
{
public:
    //==============================================================================
    ImageStage ();
    ~ImageStage();

    //==============================================================================
    //[UserMethods]     -- You can add your own custom methods in this section.
    //[/UserMethods]

    void paint (Graphics& g);
    void resized();

    // Binary resources:
    static const char* b_pageNxt_png;
    static const int b_pageNxt_pngSize;
    static const char* b_pagePrv_png;
    static const int b_pagePrv_pngSize;
    static const char* b_magnifier_png;
    static const int b_magnifier_pngSize;
    static const char* f_stage_png;
    static const int f_stage_pngSize;


private:
    //[UserVariables]   -- You can add your own custom variables in this section.
    //[/UserVariables]

    //==============================================================================
    Image cachedImage_b_pageNxt_png;
    Image cachedImage_b_pagePrv_png;
    Image cachedImage_b_magnifier_png;
    Image cachedImage_f_stage_png;


    //==============================================================================
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (ImageStage)
};

//[EndFile] You can add extra defines here...
//[/EndFile]

#endif   // __JUCE_HEADER_8630F8037A5353AE__
