//
//  Particle.hpp
//  mySketch
//
//  Created by Matthew Salaciak on 2019-01-28.

#pragma once
#include <stdio.h>
#include "ofMain.h"


class Particle {
public:
  
    Particle();
    
    void initialize();
    void bounding();
    void draw();
    
    void update(vector <Particle> *particles);
    
    ofPoint cohesion(vector <Particle> *particles);
    ofPoint seperation(vector <Particle> *particles);
    ofPoint allignment(vector <Particle> *particles);
    
    ofPoint pos;
    ofPoint vel;
    
    int radius = 0;
    
   
    
    
    
};


