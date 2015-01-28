//
//  Features.cpp
//  EigenPlayer
//
//  Created by Ken Chen on 15-1-24.
//
//

#include "Features.h"

Features::Features()
{
	addAndMakeVisible(featuresButton = new ImageButton("Features"));
	featuresButton->addListener(this);
	featuresButton->setImages(false, true, true, image_b_features_png, 1.0f, Colours::transparentBlack, image_b_features_png, 1.0f, Colours::transparentBlack, image_b_features_png, 1.0f, Colours::transparentBlack);
}

Features::~Features()
{
	
}

void Features::resized()
{
	featuresButton->setBoundsRelative(0, 0, 1, 1);
}

void Features::buttonClicked(Button* buttonThatWasClicked)
{
	
}