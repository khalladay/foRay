//
//  Light.h
//  Clusterwink
//
//  Created by Kyle Halladay on 12/17/2013.
//  Copyright (c) 2013 Kyle Halladay. All rights reserved.
//

#ifndef __Clusterwink__Light__
#define __Clusterwink__Light__

#include <map>
#include "glm.hpp"
using namespace glm;

typedef struct
{
    mat4 transform;
    vec3 color;
    float constantAttenuation;
    float linearAttenuation;
    float quadraticAttenuation;
    
}LightProperties;

class Light
{
public:
    Light(LightProperties properties){}
    
    vec3 getDirection();
    vec3 getPosition();
    
    ~Light(){}
    
private:
    mat4 transform;
};
#endif /* defined(__Clusterwink__Light__) */
