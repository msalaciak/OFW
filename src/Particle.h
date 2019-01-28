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
    Particle(); //constructor
    void setup();
    void update();
    void draw();
    
    ofPoint pos;
    ofPoint vel;
    float time;
    float lifeTime;
    bool live;
    ofPoint randomPointInCircle();
    
    
    
    
};


