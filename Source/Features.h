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
#include "ImageFeatures.h"

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
	ScopedPointer<ImageFeatures> imageFeatures;
	Image image_b_features_png = ImageCache::getFromMemory (imageFeatures->b_features_png, imageFeatures->b_features_pngSize);
};

#endif /* defined(__EigenPlayer__Features__) */
