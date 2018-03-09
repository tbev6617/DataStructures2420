//
//  LinkedListTester.hpp
//  DataStructures2420
//
//  Created by Bevan, Tyler on 2/28/18.
//  Copyright © 2018 Bevan, Tyler. All rights reserved.
//

#ifndef LinkedListTester_hpp
#define LinkedListTester_hpp

#include "../Model/Structures/Linear/LinkedList.hpp"
#include "../Controller/FileController.hpp"
#include "../Controller/Tools/Timer.hpp"
#include "../Data/CrimeData.hpp"
#include <iostream>

class LinkedListTester
{
public:
    void testListBasics();
    void testListWithData();
};

#endif /* LinkedListTester_hpp */
