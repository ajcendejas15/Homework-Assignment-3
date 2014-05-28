//
//  Ex03_04.h
//  Homework Assignment 3
//
//  Created by AJ Cendejas on 5/27/14.
//  Copyright (c) 2014 AJ Cendejas. All rights reserved.
//

#ifndef Homework_Assignment_3_Ex03_04_h
#define Homework_Assignment_3_Ex03_04_h

#include <iostream>
#include <string>

using namespace std;

string sort(string& s)
{
    string sorted = s;
    char tmp;
    int l = sorted.length();
    for (int i = 0; i < l-1; i++)
    {
        for (int j = l-1; j > i; j--)
        {
            if (sorted.at(j-1) > sorted.at(j))
            {
                tmp = sorted.at(j-1);
                sorted.at(j-1) = sorted.at(j);
                sorted.at(j) = tmp;
            }
        }
    }
    return sorted;
}

#endif
