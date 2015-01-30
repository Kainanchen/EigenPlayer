//
//  Stage.h
//  EigenPlayer
//
//  Created by Ken Chen on 15-1-24.
//
//

#ifndef __EigenPlayer__Stage__
#define __EigenPlayer__Stage__

#include "JuceHeader.h"
#include "ImageStage.h"
class Stage  : public Component

{
public:
	
	Stage();
	~Stage();
	
	void resized();
	void paint(Graphics& g);
	
private:
	ScopedPointer<ImageButton> pagePrvButton;
	ScopedPointer<ImageButton> pageNxtButton;
	ScopedPointer<ImageButton> searchButton;
	ImageStage imageStage;
	Image image_b_pageNxt_png = ImageCache::getFromMemory (imageStage.b_pageNxt_png, imageStage.b_pageNxt_pngSize);
	Image image_b_pagePrv_png = ImageCache::getFromMemory (imageStage.b_pagePrv_png, imageStage.b_pagePrv_pngSize);
	Image image_b_magnifier_png = ImageCache::getFromMemory (imageStage.b_magnifier_png, imageStage.b_magnifier_pngSize);
	Image image_f_stage_png = ImageCache::getFromMemory (imageStage.f_stage_png, imageStage.f_stage_pngSize);
};

#endif /* defined(__EigenPlayer__Stage__) */
