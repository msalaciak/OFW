//
//  Particle.cpp
//  mySketch
//
//  Created by Matthew Salaciak on 2019-01-28.
//

#include "Particle.h"

Particle :: Particle() {
    radius = 5;
    
}

void Particle :: setup() {
    pos = ofPoint(ofRandom(0,100),ofRandom(0,100),ofRandom(0,100));

        vel = ofPoint(ofRandom(-1,1),ofRandom(-1,1),ofRandom(-1,1));
}

void Particle::draw(){
    
    ofDrawCircle(pos.x, pos.y, pos.z,radius);
    
    
}


void Particle :: update() {
    pos = pos +(0.5)*vel;
    
}

void Particle::bounding() {
    
    if(pos.y>1000 || pos.y <1000){
        vel.y = -vel.y;
        
    }
    
    if(pos.x>1000 || pos.x <1000){
           vel.x = -vel.x;
        
    }
    
  
    
}
