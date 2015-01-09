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

#ifndef __JUCE_HEADER_D74E544389B1A254__
#define __JUCE_HEADER_D74E544389B1A254__

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
class PlayList  : public Component,
				  public TableListBoxModel,
				  public ValueTree::Listener,
				  public ButtonListener
{
public:
    //==============================================================================
    PlayList ();
    ~PlayList();

    //==============================================================================
    //[UserMethods]     -- You can add your own custom methods in this section.
    //[/UserMethods]

    void paint (Graphics& g);
    void resized();

	//void valueTreePropertyChanged (ValueTree& tree, const Identifier& property);
	void valueTreeChildAdded(ValueTree& parentTree, ValueTree& child){}
	void valueTreeChildRemoved(ValueTree& parentTree, ValueTree& child) {}
	void valueTreeChildOrderChanged(ValueTree& tree) {}
	void valueTreeParentChanged (ValueTree& tree){}
	void valueTreeRedirected (ValueTree& tree) {}
    void buttonClicked (Button* buttonThatWasClicked);
	
private:
    //[UserVariables]   -- You can add your own custom variables in this section.
	TableListBox table;
	Font font;
	
	ScopedPointer<TextButton> loadList;
	ScopedPointer<TextButton> saveList;
	ValueTree musicInfo;
    ValueTree playlist;
	static const Identifier musicId;
	static const Identifier musicNameId;
	static const Identifier musicTypeId;
	static const Identifier musicSingerId;
	static const Identifier musicAlbumId;
    static const Identifier playlistId;
 
    //[/UserVariables]

    //==============================================================================


    //==============================================================================
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (PlayList)
};

//[EndFile] You can add extra defines here...
//[/EndFile]

#endif   // __JUCE_HEADER_D74E544389B1A254__
