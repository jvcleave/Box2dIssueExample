/*
 *  ImageBox.h
 *  LogoBox2DKinect
 *
 *  Created by Jason Van Cleave on 9/19/12.
 *  Copyright 2012 __MyCompanyName__. All rights reserved.
 *
 */
#include "ofMain.h"
#include "ofxBox2d.h"


class ImageBox : public ofxBox2dRect{
	
public:
	ImageBox();
	ofImage image;
	void draw();
	void setTexture(ofImage &image);
};