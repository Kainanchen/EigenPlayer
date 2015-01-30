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

#include "ImageFeatures.h"


//[MiscUserDefs] You can add your own user definitions and misc code here...
//[/MiscUserDefs]

//==============================================================================
ImageFeatures::ImageFeatures ()
{

    //[UserPreSize]
    //[/UserPreSize]

    setSize (600, 400);


    //[Constructor] You can add your own custom stuff here..
    //[/Constructor]
}

ImageFeatures::~ImageFeatures()
{
    //[Destructor_pre]. You can add your own custom destruction code here..
    //[/Destructor_pre]



    //[Destructor]. You can add your own custom destruction code here..
    //[/Destructor]
}

//==============================================================================
void ImageFeatures::paint (Graphics& g)
{
    //[UserPrePaint] Add your own custom painting code here..
    //[/UserPrePaint]

    g.fillAll (Colours::white);

    //[UserPaint] Add your own custom painting code here..
    //[/UserPaint]
}

void ImageFeatures::resized()
{
    //[UserResized] Add your own custom resize handling here..
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

<JUCER_COMPONENT documentType="Component" className="ImageFeatures" componentName=""
                 parentClasses="public Component" constructorParams="" variableInitialisers=""
                 snapPixels="8" snapActive="1" snapShown="1" overlayOpacity="0.330"
                 fixedSize="0" initialWidth="600" initialHeight="400">
  <BACKGROUND backgroundColour="ffffffff"/>
</JUCER_COMPONENT>

END_JUCER_METADATA
*/
#endif

//==============================================================================
// Binary resources - be careful not to edit any of these sections!

// JUCER_RESOURCE: b_features_png, 5651, "../EigenPlayer/Images/b_Features.png"
static const unsigned char resource_ImageFeatures_b_features_png[] = { 137,80,78,71,13,10,26,10,0,0,0,13,73,72,68,82,0,0,0,205,0,0,0,232,8,6,0,0,0,76,221,96,236,0,0,0,9,112,72,89,115,0,0,30,194,0,0,30,
194,1,110,208,117,62,0,0,10,77,105,67,67,80,80,104,111,116,111,115,104,111,112,32,73,67,67,32,112,114,111,102,105,108,101,0,0,120,218,157,83,119,88,147,247,22,62,223,247,101,15,86,66,216,240,177,151,108,
129,0,34,35,172,8,200,16,89,162,16,146,0,97,132,16,18,64,197,133,136,10,86,20,21,17,156,72,85,196,130,213,10,72,157,136,226,160,40,184,103,65,138,136,90,139,85,92,56,238,31,220,167,181,125,122,239,237,
237,251,215,251,188,231,156,231,252,206,121,207,15,128,17,18,38,145,230,162,106,0,57,82,133,60,58,216,31,143,79,72,196,201,189,128,2,21,72,224,4,32,16,230,203,194,103,5,197,0,0,240,3,121,120,126,116,176,
63,252,1,175,111,0,2,0,112,213,46,36,18,199,225,255,131,186,80,38,87,0,32,145,0,224,34,18,231,11,1,144,82,0,200,46,84,200,20,0,200,24,0,176,83,179,100,10,0,148,0,0,108,121,124,66,34,0,170,13,0,236,244,
73,62,5,0,216,169,147,220,23,0,216,162,28,169,8,0,141,1,0,153,40,71,36,2,64,187,0,96,85,129,82,44,2,192,194,0,160,172,64,34,46,4,192,174,1,128,89,182,50,71,2,128,189,5,0,118,142,88,144,15,64,96,0,128,
153,66,44,204,0,32,56,2,0,67,30,19,205,3,32,76,3,160,48,210,191,224,169,95,112,133,184,72,1,0,192,203,149,205,151,75,210,51,20,184,149,208,26,119,242,240,224,226,33,226,194,108,177,66,97,23,41,16,102,
9,228,34,156,151,155,35,19,72,231,3,76,206,12,0,0,26,249,209,193,254,56,63,144,231,230,228,225,230,102,231,108,239,244,197,162,254,107,240,111,34,62,33,241,223,254,188,140,2,4,0,16,78,207,239,218,95,229,
229,214,3,112,199,1,176,117,191,107,169,91,0,218,86,0,104,223,249,93,51,219,9,160,90,10,208,122,249,139,121,56,252,64,30,158,161,80,200,60,29,28,10,11,11,237,37,98,161,189,48,227,139,62,255,51,225,111,
224,139,126,246,252,64,30,254,219,122,240,0,113,154,64,153,173,192,163,131,253,113,97,110,118,174,82,142,231,203,4,66,49,110,247,231,35,254,199,133,127,253,142,41,209,226,52,177,92,44,21,138,241,88,137,
184,80,34,77,199,121,185,82,145,68,33,201,149,226,18,233,127,50,241,31,150,253,9,147,119,13,0,172,134,79,192,78,182,7,181,203,108,192,126,238,1,2,139,14,88,210,118,0,64,126,243,45,140,26,11,145,0,16,103,
52,50,121,247,0,0,147,191,249,143,64,43,1,0,205,151,164,227,0,0,188,232,24,92,168,148,23,76,198,8,0,0,68,160,129,42,176,65,7,12,193,20,172,192,14,156,193,29,188,192,23,2,97,6,68,64,12,36,192,60,16,66,
6,228,128,28,10,161,24,150,65,25,84,192,58,216,4,181,176,3,26,160,17,154,225,16,180,193,49,56,13,231,224,18,92,129,235,112,23,6,96,24,158,194,24,188,134,9,4,65,200,8,19,97,33,58,136,17,98,142,216,34,206,
8,23,153,142,4,34,97,72,52,146,128,164,32,233,136,20,81,34,197,200,114,164,2,169,66,106,145,93,72,35,242,45,114,20,57,141,92,64,250,144,219,200,32,50,138,252,138,188,71,49,148,129,178,81,3,212,2,117,64,
185,168,31,26,138,198,160,115,209,116,52,15,93,128,150,162,107,209,26,180,30,61,128,182,162,167,209,75,232,117,116,0,125,138,142,99,128,209,49,14,102,140,217,97,92,140,135,69,96,137,88,26,38,199,22,99,
229,88,53,86,143,53,99,29,88,55,118,21,27,192,158,97,239,8,36,2,139,128,19,236,8,94,132,16,194,108,130,144,144,71,88,76,88,67,168,37,236,35,180,18,186,8,87,9,131,132,49,194,39,34,147,168,79,180,37,122,
18,249,196,120,98,58,177,144,88,70,172,38,238,33,30,33,158,37,94,39,14,19,95,147,72,36,14,201,146,228,78,10,33,37,144,50,73,11,73,107,72,219,72,45,164,83,164,62,210,16,105,156,76,38,235,144,109,201,222,
228,8,178,128,172,32,151,145,183,144,15,144,79,146,251,201,195,228,183,20,58,197,136,226,76,9,162,36,82,164,148,18,74,53,101,63,229,4,165,159,50,66,153,160,170,81,205,169,158,212,8,170,136,58,159,90,73,
109,160,118,80,47,83,135,169,19,52,117,154,37,205,155,22,67,203,164,45,163,213,208,154,105,103,105,247,104,47,233,116,186,9,221,131,30,69,151,208,151,210,107,232,7,233,231,233,131,244,119,12,13,134,13,
131,199,72,98,40,25,107,25,123,25,167,24,183,25,47,153,76,166,5,211,151,153,200,84,48,215,50,27,153,103,152,15,152,111,85,88,42,246,42,124,21,145,202,18,149,58,149,86,149,126,149,231,170,84,85,115,85,
63,213,121,170,11,84,171,85,15,171,94,86,125,166,70,85,179,80,227,169,9,212,22,171,213,169,29,85,187,169,54,174,206,82,119,82,143,80,207,81,95,163,190,95,253,130,250,99,13,178,134,133,70,160,134,72,163,
84,99,183,198,25,141,33,22,198,50,101,241,88,66,214,114,86,3,235,44,107,152,77,98,91,178,249,236,76,118,5,251,27,118,47,123,76,83,67,115,170,102,172,102,145,102,157,230,113,205,1,14,198,177,224,240,57,
217,156,74,206,33,206,13,206,123,45,3,45,63,45,177,214,106,173,102,173,126,173,55,218,122,218,190,218,98,237,114,237,22,237,235,218,239,117,112,157,64,157,44,157,245,58,109,58,247,117,9,186,54,186,81,
186,133,186,219,117,207,234,62,211,99,235,121,233,9,245,202,245,14,233,221,209,71,245,109,244,163,245,23,234,239,214,239,209,31,55,48,52,8,54,144,25,108,49,56,99,240,204,144,99,232,107,152,105,184,209,
240,132,225,168,17,203,104,186,145,196,104,163,209,73,163,39,184,38,238,135,103,227,53,120,23,62,102,172,111,28,98,172,52,222,101,220,107,60,97,98,105,50,219,164,196,164,197,228,190,41,205,148,107,154,
102,186,209,180,211,116,204,204,200,44,220,172,216,172,201,236,142,57,213,156,107,158,97,190,217,188,219,252,141,133,165,69,156,197,74,139,54,139,199,150,218,150,124,203,5,150,77,150,247,172,152,86,62,
86,121,86,245,86,215,172,73,214,92,235,44,235,109,214,87,108,80,27,87,155,12,155,58,155,203,182,168,173,155,173,196,118,155,109,223,20,226,20,143,41,210,41,245,83,110,218,49,236,252,236,10,236,154,236,
6,237,57,246,97,246,37,246,109,246,207,29,204,28,18,29,214,59,116,59,124,114,116,117,204,118,108,112,188,235,164,225,52,195,169,196,169,195,233,87,103,27,103,161,115,157,243,53,23,166,75,144,203,18,151,
118,151,23,83,109,167,138,167,110,159,122,203,149,229,26,238,186,210,181,211,245,163,155,187,155,220,173,217,109,212,221,204,61,197,125,171,251,77,46,155,27,201,93,195,61,239,65,244,240,247,88,226,113,
204,227,157,167,155,167,194,243,144,231,47,94,118,94,89,94,251,189,30,79,179,156,38,158,214,48,109,200,219,196,91,224,189,203,123,96,58,62,61,101,250,206,233,3,62,198,62,2,159,122,159,135,190,166,190,
34,223,61,190,35,126,214,126,153,126,7,252,158,251,59,250,203,253,143,248,191,225,121,242,22,241,78,5,96,1,193,1,229,1,189,129,26,129,179,3,107,3,31,4,153,4,165,7,53,5,141,5,187,6,47,12,62,21,66,12,9,
13,89,31,114,147,111,192,23,242,27,249,99,51,220,103,44,154,209,21,202,8,157,21,90,27,250,48,204,38,76,30,214,17,142,134,207,8,223,16,126,111,166,249,76,233,204,182,8,136,224,71,108,136,184,31,105,25,
153,23,249,125,20,41,42,50,170,46,234,81,180,83,116,113,116,247,44,214,172,228,89,251,103,189,142,241,143,169,140,185,59,219,106,182,114,118,103,172,106,108,82,108,99,236,155,184,128,184,170,184,129,120,
135,248,69,241,151,18,116,19,36,9,237,137,228,196,216,196,61,137,227,115,2,231,108,154,51,156,228,154,84,150,116,99,174,229,220,162,185,23,230,233,206,203,158,119,60,89,53,89,144,124,56,133,152,18,151,
178,63,229,131,32,66,80,47,24,79,229,167,110,77,29,19,242,132,155,133,79,69,190,162,141,162,81,177,183,184,74,60,146,230,157,86,149,246,56,221,59,125,67,250,104,134,79,70,117,198,51,9,79,82,43,121,145,
25,146,185,35,243,77,86,68,214,222,172,207,217,113,217,45,57,148,156,148,156,163,82,13,105,150,180,43,215,48,183,40,183,79,102,43,43,147,13,228,121,230,109,202,27,147,135,202,247,228,35,249,115,243,219,
21,108,133,76,209,163,180,82,174,80,14,22,76,47,168,43,120,91,24,91,120,184,72,189,72,90,212,51,223,102,254,234,249,35,11,130,22,124,189,144,176,80,184,176,179,216,184,120,89,241,224,34,191,69,187,22,
35,139,83,23,119,46,49,93,82,186,100,120,105,240,210,125,203,104,203,178,150,253,80,226,88,82,85,242,106,121,220,242,142,82,131,210,165,165,67,43,130,87,52,149,169,148,201,203,110,174,244,90,185,99,21,
97,149,100,85,239,106,151,213,91,86,127,42,23,149,95,172,112,172,168,174,248,176,70,184,230,226,87,78,95,213,124,245,121,109,218,218,222,74,183,202,237,235,72,235,164,235,110,172,247,89,191,175,74,189,
106,65,213,208,134,240,13,173,27,241,141,229,27,95,109,74,222,116,161,122,106,245,142,205,180,205,202,205,3,53,97,53,237,91,204,182,172,219,242,161,54,163,246,122,157,127,93,203,86,253,173,171,183,190,
217,38,218,214,191,221,119,123,243,14,131,29,21,59,222,239,148,236,188,181,43,120,87,107,189,69,125,245,110,210,238,130,221,143,26,98,27,186,191,230,126,221,184,71,119,79,197,158,143,123,165,123,7,246,
69,239,235,106,116,111,108,220,175,191,191,178,9,109,82,54,141,30,72,58,112,229,155,128,111,218,155,237,154,119,181,112,90,42,14,194,65,229,193,39,223,166,124,123,227,80,232,161,206,195,220,195,205,223,
153,127,183,245,8,235,72,121,43,210,58,191,117,172,45,163,109,160,61,161,189,239,232,140,163,157,29,94,29,71,190,183,255,126,239,49,227,99,117,199,53,143,87,158,160,157,40,61,241,249,228,130,147,227,167,
100,167,158,157,78,63,61,212,153,220,121,247,76,252,153,107,93,81,93,189,103,67,207,158,63,23,116,238,76,183,95,247,201,243,222,231,143,93,240,188,112,244,34,247,98,219,37,183,75,173,61,174,61,71,126,
112,253,225,72,175,91,111,235,101,247,203,237,87,60,174,116,244,77,235,59,209,239,211,127,250,106,192,213,115,215,248,215,46,93,159,121,189,239,198,236,27,183,110,38,221,28,184,37,186,245,248,118,246,
237,23,119,10,238,76,220,93,122,143,120,175,252,190,218,253,234,7,250,15,234,127,180,254,177,101,192,109,224,248,96,192,96,207,195,89,15,239,14,9,135,158,254,148,255,211,135,225,210,71,204,71,213,35,70,
35,141,143,157,31,31,27,13,26,189,242,100,206,147,225,167,178,167,19,207,202,126,86,255,121,235,115,171,231,223,253,226,251,75,207,88,252,216,240,11,249,139,207,191,174,121,169,243,114,239,171,169,175,
58,199,35,199,31,188,206,121,61,241,166,252,173,206,219,125,239,184,239,186,223,199,189,31,153,40,252,64,254,80,243,209,250,99,199,167,208,79,247,62,231,124,254,252,47,247,132,243,251,37,210,159,51,0,
0,0,32,99,72,82,77,0,0,122,37,0,0,128,131,0,0,249,255,0,0,128,233,0,0,117,48,0,0,234,96,0,0,58,152,0,0,23,111,146,95,197,70,0,0,11,64,73,68,65,84,120,218,236,221,219,143,149,213,25,199,241,239,158,1,6,
148,131,160,68,4,129,130,2,226,1,20,15,85,123,72,140,141,55,246,148,52,49,241,47,240,186,189,108,218,244,170,87,189,111,47,123,209,164,23,189,104,234,69,109,172,105,107,53,158,163,34,88,165,106,229,32,
72,5,97,192,25,112,134,57,236,94,60,107,59,155,201,158,119,191,171,153,61,123,191,123,127,63,9,97,70,39,58,89,239,252,102,61,107,189,235,80,3,94,6,86,163,175,212,106,53,0,234,245,186,141,161,249,198,107,
192,44,80,179,45,12,141,74,169,15,1,211,182,131,84,218,244,16,48,110,59,72,229,203,179,33,192,26,68,202,44,207,28,207,72,25,67,222,33,219,64,202,99,104,36,67,35,25,26,201,208,72,134,70,50,52,146,12,141,
100,104,36,67,35,25,26,201,208,72,50,52,146,161,145,12,141,100,104,36,67,35,25,26,73,133,161,241,140,0,41,51,52,203,108,6,41,47,52,158,174,41,101,134,230,37,224,178,77,33,149,51,12,28,3,30,3,214,217,28,
161,113,44,173,212,194,196,16,240,60,112,201,182,144,202,151,103,171,112,234,89,202,14,141,245,136,148,17,154,89,155,65,202,11,141,164,255,35,52,174,10,144,50,67,227,170,0,41,35,52,53,96,141,77,33,229,
77,4,156,198,107,4,165,82,134,211,223,19,192,131,184,14,13,112,69,128,10,77,212,154,194,115,16,184,211,54,241,118,103,21,26,109,76,4,204,216,22,82,249,49,13,105,50,192,119,54,82,70,104,36,25,26,201,208,
72,61,23,26,167,138,164,204,208,92,99,115,72,121,161,241,141,158,84,194,112,83,96,110,2,62,6,182,18,27,211,6,150,43,2,84,96,162,249,167,99,11,48,2,252,9,184,203,208,184,34,64,45,141,54,111,9,56,213,72,
146,237,34,149,27,211,204,47,217,36,149,12,141,5,189,148,25,26,183,7,72,153,161,153,196,23,157,210,130,90,141,95,54,16,179,103,215,14,106,163,56,229,172,2,19,173,126,58,86,2,47,0,247,15,122,104,156,114,
86,11,163,173,202,179,9,60,47,64,202,26,211,44,84,182,73,42,8,141,69,189,148,25,154,21,54,141,148,23,154,105,60,24,93,202,30,187,28,4,118,50,128,55,164,57,229,172,2,19,11,253,116,140,164,64,61,11,124,
115,80,67,227,148,179,90,24,93,232,224,243,201,166,50,77,82,137,49,77,131,183,9,72,153,161,241,54,1,41,51,52,167,154,74,53,73,180,127,243,127,14,120,0,216,56,136,19,1,82,11,19,237,122,154,103,129,79,109,
39,169,124,121,6,238,173,145,178,67,179,220,102,146,242,66,227,246,103,41,99,34,0,224,62,224,10,49,253,188,210,137,0,13,250,68,64,153,208,28,3,94,4,238,38,78,223,52,52,26,232,208,148,121,227,255,110,250,
251,172,237,37,229,221,79,227,216,70,34,255,82,39,167,159,229,68,64,102,79,115,59,176,222,49,141,6,121,76,147,211,211,252,30,56,98,155,201,242,172,188,11,184,120,83,202,30,211,172,179,201,100,104,242,
156,116,50,64,78,4,228,57,7,220,10,108,162,143,119,117,58,17,160,162,137,128,220,208,156,36,182,10,220,1,108,54,52,26,196,208,228,150,103,51,192,115,196,210,26,201,49,77,70,112,60,112,67,134,38,211,203,
105,124,35,57,17,80,210,39,196,118,129,237,244,225,10,1,199,52,90,204,137,128,134,47,136,179,158,31,162,15,183,11,24,26,45,230,68,64,179,45,233,143,228,152,166,164,11,192,113,224,75,155,81,142,105,202,
57,75,28,38,184,171,223,74,52,203,51,117,170,60,187,8,60,3,124,104,59,202,242,172,188,153,52,33,224,5,80,178,60,203,176,139,184,146,99,57,125,50,253,108,121,166,162,242,108,49,66,115,26,120,11,184,25,
184,211,208,200,49,77,123,71,129,87,129,81,219,83,142,105,242,92,2,198,109,82,57,166,41,111,138,184,216,118,167,229,153,44,207,202,121,1,56,108,155,202,242,172,188,217,69,254,239,73,125,31,26,128,67,192,
9,155,85,142,105,202,251,132,120,225,185,135,10,159,92,227,152,70,69,99,154,197,14,205,101,224,3,96,47,176,207,208,200,137,128,114,206,2,111,18,171,160,37,203,179,140,30,103,43,113,246,179,61,141,236,
105,74,56,76,44,173,145,250,78,167,66,83,7,70,108,94,25,154,60,171,108,94,57,166,201,115,35,176,130,152,130,222,232,152,70,253,50,166,233,100,104,62,3,94,3,174,5,30,54,52,234,151,208,116,242,164,204,51,
233,143,23,220,202,49,77,110,50,241,50,40,57,166,201,50,9,108,0,118,83,145,51,160,45,207,212,173,49,77,243,216,230,227,20,154,91,12,141,170,30,154,165,40,207,234,192,219,196,113,79,146,99,154,12,135,113,
147,154,28,211,100,151,105,231,137,91,212,110,176,60,147,99,154,246,166,136,109,3,107,129,71,12,141,28,211,148,252,31,18,247,118,74,142,105,50,204,18,103,164,93,182,249,229,152,166,156,73,224,35,226,140,
180,253,150,103,114,76,211,222,231,196,206,206,85,192,143,12,141,12,77,94,47,183,27,216,97,104,100,104,202,57,71,188,248,252,161,161,81,149,66,211,205,195,253,166,240,236,103,85,80,183,79,196,188,68,188,
187,113,251,128,42,99,184,203,255,255,49,98,163,218,81,224,1,96,165,229,153,28,211,180,239,105,142,1,239,17,59,60,191,97,104,228,152,166,156,11,192,115,196,121,2,146,229,89,73,51,192,22,226,128,193,174,
254,170,183,167,81,47,151,103,205,198,211,164,192,215,136,203,111,13,141,12,77,27,117,98,251,192,36,240,132,161,145,99,154,242,222,33,238,185,145,28,211,148,52,73,188,248,124,220,158,70,189,216,211,244,
226,233,48,151,136,251,59,207,1,215,27,28,245,154,94,61,82,233,52,240,107,224,39,196,251,155,165,29,92,213,235,212,106,53,131,163,202,148,103,141,18,237,93,98,107,244,61,221,248,62,27,193,145,170,80,158,
65,236,238,60,3,252,42,149,104,79,118,229,155,152,157,245,71,68,149,233,105,26,46,2,239,19,135,12,222,234,227,82,47,244,52,195,21,248,38,207,18,219,163,247,2,219,124,102,50,52,229,156,74,225,121,210,103,
166,110,135,102,168,66,223,236,27,120,252,147,28,211,100,79,14,92,4,30,4,174,241,209,201,242,172,189,105,224,95,233,227,71,125,118,234,86,104,170,248,34,98,71,154,24,24,242,249,169,11,70,135,43,248,77,
79,2,91,129,187,125,126,178,60,43,239,48,177,90,224,40,177,247,198,94,71,150,103,37,236,1,174,3,94,245,57,106,41,203,179,170,47,174,26,6,94,7,14,248,44,229,152,166,156,26,177,70,109,47,113,175,231,141,
84,107,26,93,142,105,186,18,154,15,137,67,213,207,2,143,249,76,213,233,208,84,125,0,61,75,188,191,249,35,241,194,115,204,103,170,78,235,151,89,167,25,226,150,181,223,18,59,63,61,63,77,29,29,72,247,131,
229,192,127,137,109,210,107,129,123,113,26,90,29,42,207,250,113,107,226,78,98,15,206,10,226,88,40,183,95,106,49,141,246,227,76,211,40,240,16,49,171,182,217,30,71,246,52,237,45,3,30,38,174,39,124,26,24,
241,57,107,49,127,41,247,123,233,242,22,113,48,135,100,121,86,66,141,152,81,187,23,88,231,179,214,98,149,103,253,254,246,252,61,224,10,240,245,84,174,73,134,166,141,89,226,92,232,229,196,77,107,203,125,
230,50,52,237,77,3,7,83,137,214,149,131,7,101,104,170,104,146,184,141,96,19,176,15,223,221,200,208,148,50,78,156,49,176,131,216,139,35,25,154,18,206,19,183,173,237,5,182,251,252,101,104,202,57,13,28,7,
246,167,207,87,251,115,32,67,211,222,81,98,255,205,33,226,156,232,235,253,89,144,161,105,239,223,196,138,129,49,226,5,232,90,127,30,100,104,138,213,137,125,55,239,165,191,15,208,133,11,164,100,104,170,
168,17,156,145,20,156,21,54,137,12,77,123,147,41,56,215,165,143,215,224,178,27,25,154,182,46,1,71,128,87,128,251,128,155,109,18,25,154,246,70,137,235,60,14,0,55,17,211,209,174,30,144,161,41,97,12,120,
155,88,175,118,51,174,87,147,161,105,235,36,113,187,244,41,226,160,245,77,54,137,26,161,113,255,124,107,141,243,212,254,78,172,144,150,190,98,79,83,172,78,204,168,141,17,239,112,54,216,36,246,52,134,166,
189,227,196,121,106,183,17,219,10,100,104,212,174,145,82,79,179,141,88,163,118,45,176,210,102,49,52,106,239,52,240,98,250,120,3,49,21,237,11,80,67,163,2,23,137,217,180,247,137,133,158,235,137,125,57,50,
52,106,227,2,113,189,199,14,226,80,66,15,235,48,52,202,240,41,49,61,189,35,125,238,234,1,67,163,2,39,211,24,231,4,115,215,123,108,181,89,12,141,138,213,129,99,196,148,244,117,192,163,54,137,161,81,57,
87,210,196,64,163,167,241,24,92,67,163,18,206,2,255,32,166,166,119,2,83,196,190,28,25,26,45,212,152,196,133,185,71,128,215,136,115,214,190,109,179,244,223,115,94,102,27,44,186,47,128,151,128,27,210,4,
1,196,180,180,219,168,251,132,61,77,103,123,158,143,129,191,50,183,197,0,188,153,205,242,76,11,26,35,206,85,59,72,156,63,112,33,133,103,191,77,83,237,208,248,50,110,233,172,78,99,156,63,219,20,149,54,
106,79,179,116,174,16,47,64,55,167,94,103,155,77,98,121,166,246,190,4,94,7,14,167,240,124,129,91,169,13,141,10,77,19,39,222,28,37,174,253,56,68,28,137,235,142,80,67,163,54,234,196,98,207,15,137,105,233,
59,136,217,54,95,134,26,26,181,49,75,236,207,57,147,74,182,187,83,136,38,136,13,110,78,212,244,96,104,124,185,217,27,227,156,223,113,245,173,5,235,129,159,218,52,189,201,223,100,189,165,113,246,192,70,
224,63,77,207,200,95,110,189,195,41,231,30,156,40,152,38,22,123,110,75,37,219,71,105,204,211,24,11,249,139,206,242,76,45,76,1,63,79,1,105,156,126,179,146,216,175,227,47,58,203,51,149,176,155,88,81,240,
6,174,93,235,122,121,102,104,170,229,77,224,154,20,156,221,54,135,99,26,181,175,10,142,19,231,75,63,15,220,79,92,64,229,237,212,142,105,180,128,58,240,108,10,79,45,245,54,107,128,95,226,82,156,37,101,
79,83,205,240,212,129,15,136,235,64,46,2,223,74,207,114,214,103,218,249,158,198,6,174,174,89,174,190,157,250,29,98,155,245,62,220,37,106,121,166,66,151,129,223,48,247,98,116,6,184,49,125,252,68,154,56,
144,229,153,230,255,246,35,14,242,24,39,86,79,191,70,28,100,56,2,220,227,115,182,60,83,177,113,224,124,250,115,36,245,58,99,192,39,196,30,30,223,243,24,26,21,24,37,150,225,188,9,252,147,56,196,240,54,
155,197,49,141,138,29,34,214,176,145,122,156,53,192,45,233,243,237,54,143,99,26,21,59,9,124,70,76,87,191,66,156,63,189,42,77,38,212,240,218,144,82,61,141,203,104,6,243,23,101,99,70,237,59,105,162,0,224,
123,204,157,205,166,130,146,215,242,108,240,204,164,50,13,224,25,224,229,244,241,102,224,246,121,95,235,251,158,22,12,205,96,155,76,229,26,196,117,33,107,231,253,251,3,204,93,88,5,115,75,120,6,154,229,
153,26,182,16,59,70,155,61,2,124,183,233,243,173,192,174,65,47,207,12,141,138,108,0,238,106,250,252,7,192,143,29,211,72,11,59,79,188,223,105,216,8,124,191,69,176,214,91,158,73,173,237,33,86,84,55,187,
29,120,114,222,63,27,233,227,32,217,211,40,203,71,196,29,163,205,54,17,183,192,53,219,14,60,101,79,35,45,108,254,201,160,251,128,191,181,248,186,101,84,255,133,186,61,141,22,197,216,188,207,79,0,127,104,
241,117,235,184,122,54,110,254,47,239,74,252,18,55,52,234,132,207,129,95,180,248,231,171,137,85,214,243,87,90,47,39,142,167,170,68,104,44,207,180,212,246,183,248,185,91,65,236,1,170,130,243,134,70,189,
226,32,115,187,79,23,178,199,208,72,115,195,132,199,137,169,234,34,63,163,248,46,159,45,75,240,189,78,57,166,81,47,152,1,158,46,241,117,195,20,31,87,245,20,87,175,149,235,132,105,67,163,94,80,47,249,117,
127,105,83,194,61,186,4,161,185,108,104,84,181,30,105,170,224,223,159,32,206,69,232,164,177,255,13,0,164,185,40,89,26,164,46,223,0,0,0,0,73,69,78,68,174,66,96,130,0,0};

const char* ImageFeatures::b_features_png = (const char*) resource_ImageFeatures_b_features_png;
const int ImageFeatures::b_features_pngSize = 5651;


//[EndFile] You can add extra defines here...
//[/EndFile]
