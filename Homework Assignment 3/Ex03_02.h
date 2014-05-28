//
//  Ex03_02.h
//  Homework Assignment 3
//
//  Created by AJ Cendejas on 5/27/14.
//  Copyright (c) 2014 AJ Cendejas. All rights reserved.
//

#ifndef __Homework_Assignment_3__Ex03_02__
#define __Homework_Assignment_3__Ex03_02__

#include <iostream>
#include <cmath>

using namespace std;

//Define QuadraticEquation class
class QuadraticEquation
{
private:
    
    //Properties
    double a, b, c;
    
public:
    
    //Get Functions for a, b, c, the discriminant and both roots
    double getA()
    {
        return a;
    }
    
    void setA(double newA)
    {
        a = newA;
    }
    
    double getB()
    {
        return b;
    }
    
    void setB(double newB)
    {
        b = newB;
    }
    
    double getC()
    {
        return c;
    }
    
    void setC(double newC)
    {
        c = newC;
    }
    
    double getDiscriminant()
    {
        return ((b*b)-(4*a*c));
    }
    
    double getRoot1()
    {
        if( getDiscriminant() >= 0)
            return (-b + sqrt(getDiscriminant()))/(2*a);
        else
            return 0;
    }
    
    double getRoot2()
    {
        if( getDiscriminant() >= 0)
            return (-b - sqrt(getDiscriminant()))/(2*a);
        else
            return 0;
    }
    
    //Constructors
    QuadraticEquation(double x, double y, double z)
    {
        x = a;
        y = b;
        z = c;
    }
    
    QuadraticEquation()
    {}
};


#endif
