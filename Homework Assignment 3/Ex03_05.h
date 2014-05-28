//
//  Ex03_05.h
//  Homework Assignment 3
//
//  Created by AJ Cendejas on 5/27/14.
//  Copyright (c) 2014 AJ Cendejas. All rights reserved.
//

#ifndef Homework_Assignment_3_Ex03_05_h
#define Homework_Assignment_3_Ex03_05_h

#include <iostream>

using namespace std;

class MyInteger
{
private:
    //Properties
    int value;
    
public:
    //Functions
    
    int getValue() const
    {
        return value;
    }
    
    bool isEven() const
    {
        if (value % 2 == 0)
            return true;
        else
            return false;
    }
    
    bool isOdd() const
    {
        if (value % 2 != 0)
            return true;
        else
            return false;
    }
    
    bool isPrime() const
    {
        bool flag = false;
        for (int i = 2; i < value; i ++)
        {
            if ( value % i != 0)
                flag = true;
        }
        return flag;
    }
    
    static bool isEven(int x)
    {
        if (x % 2 == 0)
            return true;
        else
            return false;
    }
    
    bool isOdd(int x)
    {
        if (x % 2 != 0)
            return true;
        else
            return false;
    }
    
    static bool isPrime(int x)
    {
        bool flag = true;
        for( int i = 2; i < 10; i ++)
        {
            if (x % i == 0)
                return false;
        }
        return flag;
    }
    
    bool isEven(const MyInteger& x)
    {
        if (x.getValue() % 2 == 0)
            return true;
        else
            return false;
    }
    
    bool isOdd(const MyInteger& x)
    {
        if (x.getValue() % 2 != 0)
            return true;
        else
            return false;
    }
    
    bool isPrime(const MyInteger& x)
    {
        bool flag = false;
        for (int i = 2; i < 10; i ++)
        {
            if ( x.getValue() % i != 0)
                flag = true;
        }
        return flag;
    }

    bool equals(int x) const
    {
        if (value == x)
            return true;
        else
            return false;
    }
    
    bool equals (const MyInteger& x)
    {
        if (value == x.getValue())
            return true;
        else
            return false;
    }
    
    static int parseInt(const string& s)
    {
        return atoi(s.c_str());
    }

    //Constructor
    MyInteger(int x)
    {
        value = x;
    }
};

#endif
