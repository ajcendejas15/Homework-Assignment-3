//
//  Ex03_01.h
//  Homework Assignment 3
//
//  Created by AJ Cendejas on 5/27/14.
//  Copyright (c) 2014 AJ Cendejas. All rights reserved.
//

#ifndef __Homework_Assignment_3__Ex03_01__
#define __Homework_Assignment_3__Ex03_01__

#include <iostream>

using namespace std;

//Define Fan Class
class Fan
{
private:
    //Properties
    int speed;
    bool on;
    double radius;
    
public:
    //Constructor
    Fan()
    {
        speed = 1;
        on = false;
        radius = 5;
    }
    
    int getSpeed()
    {
        return speed;
    }
    
    void setSpeed (int newSpeed)
    {
        speed = newSpeed;
    }
    
    bool isOn()
    {
        return on;
    }
    
    void turnOn()
    {
        on = true;
    }
    
    void turnOff()
    {
        on = false;
    }
    
    double getRadius()
    {
        return radius;
    }
    
    void setRadius(double newRadius)
    {
        radius = newRadius;
    }
};


#endif