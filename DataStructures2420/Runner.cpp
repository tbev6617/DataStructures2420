//
//  Runner.cpp
//  DataStructuresProject
//
//  Created by Bevan, Tyler on 1/31/18.
//  Copyright © 2018 Bevan, Tyler. All rights reserved.
//

#include "Controller/Controller.hpp"
int main()
{
    int sample = 7;
    cout << &sample << endl;
    unsigned long address = (unsigned long) &sample;
    cout << address << endl;
    
    unsigned long * storage; 
    if (0x7fff5fbff628 == address)
    {
        cout << "the same" << endl;
    }
//    Controller app;
//    app.start();
    return 0;
}
