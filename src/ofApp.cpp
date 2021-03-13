#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofEnableDepthTest();
    ofEnableLighting();
    ofEnableNormalizedTexCoords();
    ofSetBackgroundColor(0, 0, 0);
    
//    boxX = ofGetWidth() /2;
//    boxY = ofGetHeight() /2;
//    boxZ = 0;
//    boxRotateX = 0;
//    
//    light.setPointLight();
//    light.setDiffuseColor(ofFloatColor(1.0, 0.5, 0.0));
//    light.setAmbientColor(ofFloatColor(0.3, 0.3, 0.3));
//    light.setPosition(ofGetWidth()*.5, ofGetHeight()*.7, 300);
//    
//    boxMaterial.setDiffuseColor(ofFloatColor(1.0, 0.0, 0.0));
    
    sBox.moveTo(ofGetWidth() / 2, ofGetHeight() /2, -100);
    
    wall1.setTexture(ofImage("ocean.jpg"));
    wall2.setTexture(ofImage("ocean.jpg"));
    wall3.setTexture(ofImage("ocean.jpg"));
    
    wall1.setWidth(25);
    wall1.setHeight(500);
    wall1.setDepth(500);
    wall1.moveTo(0, ofGetHeight() / 2, 0);
    
    wall2.setWidth(25);
    wall2.setHeight(500);
    wall2.setDepth(500);
    wall2.moveTo(ofGetWidth(), ofGetHeight()/2, 0);
    
    wall3.setWidth(ofGetWidth());
    wall3.setHeight(500);
    wall3.setDepth(25);
    wall3.moveTo(ofGetWidth()/2, ofGetHeight()/2, -250);
    

}

//--------------------------------------------------------------
void ofApp::update(){
    
//    boxRotateX += 0.25;
    sBox.rotateXDeg(1.0);

}

//--------------------------------------------------------------
void ofApp::draw(){
    light.enable();
    sBox.draw();
    wall1.draw();
    wall2.draw();
    wall3.draw();
    light.disable();

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
    
    sBox.setTexture(ofImage("ocean.jpg"));

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
