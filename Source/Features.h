//
//  Features.h
//  EigenPlayer
//
//  Created by Ken Chen on 15-1-24.
//
//

#ifndef __EigenPlayer__Features__
#define __EigenPlayer__Features__

#include "JuceHeader.h"

class Features  : public Component,
				  public ButtonListener

{
public:
	
	Features ();
	~Features();

	void resized();
	void buttonClicked (Button* buttonThatWasClicked);
	
private:
	ScopedPointer<ImageButton> featuresButton;
	Image featuresButtonImage = ImageFileFormat::loadFrom(File("../../../../Images/b_Features.png"));
};

#endif /* defined(__EigenPlayer__Features__) */
