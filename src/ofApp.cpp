#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    //load font
    
    width = ofGetWidth();
    height = ofGetHeight();
    //ofEnableBlendMode(OF_BLENDMODE_MULTIPLY);
    
    font.load("GT-Walsheim-Bold.otf", 150);
    rowCount = 50;
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    ofBackground(0);
    ofSetColor(255);
    
    string myString = "AHH";
    
    fontRect = font.getStringBoundingBox(myString,0,0);
    
    int baseline = -fontRect.y;
    int dynamic_descender = fontRect.height-baseline;
    float y = 0;
    ofSetColor(255, 0, 0);
    ofNoFill();
    
    for(int i = 0; i < rowCount; i++){
        float division = i+1;//pow(2,i);
        float scale = width / division / fontRect.width;
        float x = 0;
        
        cout << "scale " << scale << " x : " << x << " y : " << y << endl;
        
        for( int j = 0; j < division ; j++){  //for( int j = 0; j < pow(2,i) ; j++){
            
            ofPushMatrix();
            
                ofTranslate(mouseX, mouseY);
            
                //distribute positions including scale factor
                ofTranslate(x, y);
            
                //align back to left top corner(0,0)
                ofTranslate(scale*fontRect.width/2, scale*fontRect.height*0.5);
            
                //scale string by row
                ofScale(scale,scale);
            
                //translate string to be centered on (0,0)
                ofTranslate(-fontRect.width/2, -fontRect.height/2);
            
                //draw sting on left top corner (0,0)
                font.drawString(myString, dynamic_descender, baseline);
                //ofDrawRectangle(fontRect);
            ofPopMatrix();
            
            x += scale * fontRect.width;
            
        }
        
        y += scale * fontRect.height;
        
    }

}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
