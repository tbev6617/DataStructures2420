//
//  SortingTester.hpp
//  DataStructures2420
//
//  Created by Bevan, Tyler on 3/15/18.
//  Copyright © 2018 Bevan, Tyler. All rights reserved.
//

#ifndef SortingTester_hpp
#define SortingTester_hpp

#include <iostream>
#include "../Controller/FileController.hpp"
#include "../Controller/Tools/Timer.hpp"

class SortingTester
{
private:
    int swapCount;
    void quickSort(vector<CrimeData> data, int low, int high);
    int partition(vector<CrimeData> data, int low, int high);
    void swap(vector<CrimeData> data, int small, int large);
public:
    void testSorts();
};

#endif /* SortingTester_hpp */
