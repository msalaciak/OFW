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
    void setup();
    void update()
    void draw();
    void bounding();
    ofPoint pos;
    ofPoint vel;
    float radius;
    
    
    
    
};


