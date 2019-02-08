#include "ofApp.h"
#include <iostream>


//--------------------------------------------------------------
void ofApp::setup(){
  
     ofSetCircleResolution(100);
    
    
    for(int i=0; i < num; i++) {
        Particle *part = new Particle();
        particles.push_back(part);
        particles[i]->setup();
        color.push_back(ofColor(ofRandom(255)));
        
        
    }
    
    
    
}

//--------------------------------------------------------------
void ofApp::update(){
    for(int i =0; i<num; i++){
        particles[i]->update();
        particles[i]->bounding();
        
        
    
    }
    
    std::stringstream strm;
    strm << "fps: " << ofGetFrameRate();
    ofSetWindowTitle(strm.str());
   
}

//--------------------------------------------------------------
void ofApp::draw(){
    ofBackground(0);
    
    for(int i=0; i<num; i++){
        
        ofSetColor(color[i]);
        particles[i]->draw();
    
        
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
