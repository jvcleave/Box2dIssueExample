#include "ImageBox.h"

ImageBox::ImageBox()
{

}

void ImageBox::draw() 
{
	ofxBox2dRect::draw();
	ofPushMatrix();
		ofEnableAlphaBlending();
		ofTranslate(getPosition().x, getPosition().y, 0);
		ofRotate(getRotation());
			image.setAnchorPercent(0.5, 0.5);
			//Weird part B: I have to scale the image back up
			image.draw(0, 0, getWidth()*2, getHeight()*2);
		ofDisableAlphaBlending();
	ofPopMatrix();
}

void ImageBox::setTexture(ofImage &image)
{
	this->image = image;
	
}