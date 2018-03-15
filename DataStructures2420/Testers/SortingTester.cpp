//
//  SortingTester.cpp
//  DataStructures2420
//
//  Created by Bevan, Tyler on 3/15/18.
//  Copyright © 2018 Bevan, Tyler. All rights reserved.
//

#include "SortingTester.hpp"
void SortingTester :: quickSort(vector<CrimeData> data, int low, int high)
{
    if (low < high)
    {
        int partitionPoint = partition(data, low, high);
        
        quickSort(data, low, partitionPoint - 1);
        quickSort(data, partitionPoint + 1, high);
    }
}

int SortingTester :: partition(vector<CrimeData> info, int low, int high)
{
    CrimeData pivotValue = info [high];
    int smallest = low - 1;
    
    for(int i = low; i < high - 1; i++)
    {
        if (info[i] < pivotValue)
        {
            smallest++;
            swap(info, smallest, i);
        }
    }
    swap(info, smallest + 1, high);
    return smallest + 1;
}

void SortingTester :: swap(vector<CrimeData> info, int small, int large)
{
    CrimeData temp = info[small];
    info[small] = info[large];
    info[large] = temp;
}

void SortingTester :: testSorts()
{
    Timer sortTimer;
    vector<CrimeData> data = FileController :: readCrimeDataToVector("/Users/tbev6617/Documents/Data Structures/DataStructures2420/DataStructures2420/Data/crime.csv");
    
    sortTimer.startTimer();
    quickSort(data, 0, data.size());
    sortTimer.stopTimer();
    sortTimer.displayInformation();
}



