//
//  main.cpp
//  Homework Assignment 3
//
//  Created by AJ Cendejas on 5/27/14.
//  Copyright (c) 2014 AJ Cendejas. All rights reserved.
//

#include "Ex03_01.h"
#include "Ex03_02.h"
#include "Ex03_03.h"
#include "Ex03_04.h"
#include "Ex03_05.h"

using namespace std;


int main()
{
    //Ex03_01
    Fan f1, f2;
    f1.setSpeed(3);
    f1.setRadius(10);
    f1.turnOn();
    
    f2.setSpeed(2);
    f2.setRadius(5);
    f2.turnOff();
    
    cout << boolalpha;
    cout << "Fan 1: " << endl << "Speed: " << f1.getSpeed();
    cout << endl << "On: " << f1.isOn();
    cout << endl << "Radius: " << f1.getRadius() << endl << endl;
   
    cout << "Fan 2: " << endl << "Speed: " << f2.getSpeed();
    cout << endl << "On: " << f2.isOn();
    cout << endl << "Radius: " << f2.getRadius() << endl << endl;
    
    //Ex03_02
    QuadraticEquation eq1;
    double a, b, c;
    cout << "Enter a value for a: ";
    cin >> a;
    cout << endl << "Enter a value for b: ";
    cin >> b;
    cout << endl << "Enter a value for c: ";
    cin >> c;
    
    eq1.setA(a);
    eq1.setB(b);
    eq1.setC(c);
    
    if (eq1.getDiscriminant() < 0)
        cout << "The equation has no real roots.\n";
    else if ( eq1.getDiscriminant() == 0)
        cout << eq1.getRoot1();
    else
    {
        cout << "Root 1: " << eq1.getRoot1() << endl;
        cout << "Root 2: " << eq1.getRoot2() << endl;
    }
    
    //Ex03_03
    EvenNumber n(16);
    cout << "\nOriginal even number: " << n.getValue();
    int val = n.getValue();
    n.getNext(val);
    cout << "\nNext even number: " << n.getValue();
    n.getPrevious(val);
    cout << "\nPrevious even number: " << n.getValue() << endl;
    
    //Ex03_04
    string s;
    cout << "\nEnter a string s: ";
    cin >> s;
    cout << "\nThe sorted string is " << sort(s) << endl;
    
    //Ex03_05
    MyInteger i(11);
    cout << "\nMy Integer: " << i.getValue() << "\n" << "Even: " << i.isEven() << "\n" << i.isEven(i) << "\n12: " << i.isEven(12);
    cout << "\nOdd: " << i.isOdd() << "\n" << i.isOdd(i) << "\n12: " << i.isOdd(12);
    cout << "\nPrime: " << i.isPrime() << "\n" << i.isOdd(i) << "\n12: " << i.isPrime(12);
    
    cout << "\nString \"457\" to int: " << i.parseInt("457") << endl;
    
}