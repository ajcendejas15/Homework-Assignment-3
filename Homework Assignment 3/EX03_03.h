//
//  EX03_03.h
//  Homework Assignment 3
//
//  Created by AJ Cendejas on 5/27/14.
//  Copyright (c) 2014 AJ Cendejas. All rights reserved.
//

#ifndef Homework_Assignment_3_EX03_03_h
#define Homework_Assignment_3_EX03_03_h

#include <iostream>

using namespace std;

class EvenNumber
{
private:
    //Properties
    int value;
    
public:
    //Functions
    int getValue()
    {
        return value;
    }
    
    void getNext(int a)
    {
        a += 2;
        value = a;
    }
    
    void getPrevious(int a)
    {
        a -= 2;
        value = a;
    }
    
    //Constructors
    EvenNumber(int specifiedValue)
    {
        value = specifiedValue;
    }
    
    EvenNumber()
    {
        value = 0;
    }
};

#endif