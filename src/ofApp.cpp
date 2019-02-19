#include "ofApp.h"
#include <iostream>


//--------------------------------------------------------------
void ofApp::setup(){
    ofBackground(0,0,0);

    for(int i=0; i<num;++i){
        Particle p;
        particle.push_back(p);
        particle[i].initialize();
        
    }
  
    
}



//--------------------------------------------------------------
void ofApp::update(){
 
    for(int i=0; i<num; ++i){
        particle[i].update(&particle);
        particle[i].bounding();
        
        
        
    }
   
    
    ofSetWindowTitle(ofToString(ofGetFrameRate()));
    
    
   
}

//--------------------------------------------------------------
void ofApp::draw(){
   
    
    if(ofGetKeyPressed('s')){
        ofBeginSaveScreenAsPDF(ofGetTimestampString() + ".pdf");
        
    }
   
    
    ofBackground(0,0,0);
    ofSetColor(255);
    
    ofTranslate(ofGetWidth()/2, ofGetHeight()/2);
    
    for(int i=0; i<num; ++i){
        particle[i].draw();
        
        
    }
    
    

    if(ofGetKeyPressed('s')){
        ofEndSaveScreenAsPDF();
        
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
