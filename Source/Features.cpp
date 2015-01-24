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
	featuresButton->setImages(false, true, true, featuresButtonImage, 1.0f, Colours::transparentBlack, featuresButtonImage, 1.0f, Colours::transparentBlack, featuresButtonImage, 1.0f, Colours::transparentBlack);
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