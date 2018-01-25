//
//  Controller.cpp
//  QuickCPlusPlus
//
//  Created by Harris, Jacob on 1/25/18.
//  Copyright © 2018 Harris, Jacob. All rights reserved.
//

#include "Controller.hpp"

using namespace std;
// "::" means scope resolution, tells the compiler that the controller constructor belongs to the controller class.
Controller :: Controller()
{
    
}

void Controller :: start()
{
    for(int index = 0; index < 10000; index++)
    {
        cout << "This loop has executed " << index + 1 << " times" << endl;
    }
    array();
    HW();
}
void Controller :: array()
{
    cout << "this be the array:" << endl;
    int FirstArray [5] = {1,3,5,7,9};
    for(int i = 0; i<sizeof(FirstArray)/sizeof(*FirstArray); i++)
    {
        cout << FirstArray[i] << endl;
    }
}
void Controller :: HW()
{
    string name = "Jacob Harris";
    cout << "My name is: " << name << endl;
    cout << "the address of the String name is: " << &name << "." << endl;
    for(int i = 13; i<=31; i++)
    {
        cout << i << endl;
    }
}
