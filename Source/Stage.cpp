//
//  Stage.cpp
//  EigenPlayer
//
//  Created by Ken Chen on 15-1-24.
//
//

#include "Stage.h"

Stage::Stage()
{
	addAndMakeVisible(pagePrvButton = new ImageButton("Previous Page"));
	pagePrvButton->setImages(false, true, true, pagePrvButtonImage, 1.0f, Colours::transparentBlack, pagePrvButtonImage, 1.0f, Colours::transparentBlack, pagePrvButtonImage, 1.0f, Colours::transparentBlack);
	
	addAndMakeVisible(pageNxtButton = new ImageButton("Next Page"));
	pageNxtButton->setImages(false, true, true, pageNxtButtonImage, 1.0f, Colours::transparentBlack, pageNxtButtonImage, 1.0f, Colours::transparentBlack, pageNxtButtonImage, 1.0f, Colours::transparentBlack);
	
	addAndMakeVisible(searchButton = new ImageButton("Search"));
	searchButton->setImages(false, true, true, searchButtonImage, 1.0f, Colours::transparentBlack, searchButtonImage, 1.0f, Colours::transparentBlack, searchButtonImage, 1.0f, Colours::transparentBlack);
	
	
}

Stage::~Stage()
{
	
}

void Stage::resized()
{
	pagePrvButton->setBounds(10,10,50,50);
	pageNxtButton->setBounds(65,10,50,50);
	searchButton->setBounds(120,10,50,50);
}

void Stage::paint(Graphics& g)
{
	g.drawImage(stageImage, 0, 0, getWidth(), getHeight(), 0, 0, stageImage.getWidth(), stageImage.getHeight());
}