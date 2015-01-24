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

class Stage  : public Component

{
public:
	
	Stage ();
	~Stage();
	
	void resized();
	void paint(Graphics& g);
	
private:
	ScopedPointer<ImageButton> pagePrvButton;
	ScopedPointer<ImageButton> pageNxtButton;
	ScopedPointer<ImageButton> searchButton;
	Image stageImage = ImageFileFormat::loadFrom(File("../../../../Images/f_Stage.png"));
	Image searchButtonImage = ImageFileFormat::loadFrom(File("../../../../Images/b_Magnifier.png"));
	Image pagePrvButtonImage = ImageFileFormat::loadFrom(File("../../../../Images/b_PagePrv.png"));
	Image pageNxtButtonImage = ImageFileFormat::loadFrom(File("../../../../Images/b_PageNxt.png"));
};

#endif /* defined(__EigenPlayer__Stage__) */
