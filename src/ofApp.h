#pragma once

#include "ofMain.h"

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void mouseEntered(int x, int y);
		void mouseExited(int x, int y);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);
    
    //font type
    ofTrueTypeFont font;
    int width = ofGetWidth();
    int height = ofGetHeight();
    int gutter = 20;
    int recNum = 5;
    int gap = 5;
    int recW = (width - gutter*2 - gap*(recNum-1))/recNum;
    int recH = (height - gutter*2 - gap*(recNum-1))/recNum;
    int rowCount;
    ofRectangle fontRect;
		
};
