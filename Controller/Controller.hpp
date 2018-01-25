//
//  Controller.hpp
//  QuickCPlusPlus
//
//  Created by Harris, Jacob on 1/25/18.
//  Copyright © 2018 Harris, Jacob. All rights reserved.
//

#ifndef Controller_hpp
#define Controller_hpp

#include <iostream>

class Controller
{
private:
    //data members and helper methods.
protected:
    //Things that need to only be used by subclasses.
public:
    //Anyone can see this.
    Controller();
    void start();
    void array();
    void HW();
};

#endif /* Controller_hpp */
