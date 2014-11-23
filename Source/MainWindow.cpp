//
//  MainWindow.cpp
//  EigenPlayer
//
//  Created by Ken Chen on 14-11-23.
//
//

#include "MainWindow.h"

MainWindow::MainWindow()
: DocumentWindow("MainWindow",
				 Colours::lightgrey,
				 DocumentWindow::allButtons)
{
	setUsingNativeTitleBar (true);
	setContentOwned (new MainContentComponent(), true);
	
	centreWithSize (getWidth(), getHeight());
	setVisible (true);
	setResizable(true,false);
	setResizeLimits (400, 400, 10000, 10000);
}

void MainWindow::closeButtonPressed()
{
	// This is called when the user tries to close this window. Here, we'll just
	// ask the app to quit when this happens, but you can change this to do
	// whatever you need.
	JUCEApplication::getInstance()->systemRequestedQuit();
}