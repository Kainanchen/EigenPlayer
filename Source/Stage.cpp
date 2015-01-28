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
	pagePrvButton->setImages(false, true, true, image_b_pagePrv_png, 1.0f, Colours::transparentBlack, image_b_pagePrv_png, 1.0f, Colours::transparentBlack, image_b_pagePrv_png, 1.0f, Colours::transparentBlack);
	
	addAndMakeVisible(pageNxtButton = new ImageButton("Next Page"));
	pageNxtButton->setImages(false, true, true, image_b_pageNxt_png, 1.0f, Colours::transparentBlack, image_b_pageNxt_png, 1.0f, Colours::transparentBlack, image_b_pageNxt_png, 1.0f, Colours::transparentBlack);
	
	addAndMakeVisible(searchButton = new ImageButton("Search"));
	searchButton->setImages(false, true, true, image_b_magnifier_png, 1.0f, Colours::transparentBlack, image_b_magnifier_png, 1.0f, Colours::transparentBlack, image_b_magnifier_png, 1.0f, Colours::transparentBlack);
	
	
}

Stage::~Stage()
{
	
}

void Stage::resized()
{
	pagePrvButton->setBounds(10,10,50,50);
	pageNxtButton->setBounds(65,10,50,50);
	searchButton->setBounds(120,10,200,50);
}

void Stage::paint(Graphics& g)
{
	g.drawImage(image_f_stage_png, 0, 0, getWidth(), getHeight(), 0, 0, image_f_stage_png.getWidth(), image_f_stage_png.getHeight());
}