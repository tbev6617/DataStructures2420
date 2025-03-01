//
//  Timer.cpp
//  DataStructuresProject
//
//  Created by Bevan, Tyler on 1/31/18.
//  Copyright © 2018 Bevan, Tyler. All rights reserved.
//

#include "Timer.hpp"

using namespace std;

Timer :: Timer()
{
    executionTime = 0;
}
void Timer :: resetTimer()
{
    executionTime = 0;
}
void Timer :: startTimer()
{
    executionTime = clock();
}
void Timer :: stopTimer()
{
    assert(executionTime > 0);
    executionTime = clock() - executionTime;
}
void Timer :: displayInformation()
{
    cout << "Execution time is " << executionTime << endl;
    cout << "In human time it is " << double (executionTime)/CLOCKS_PER_SEC << " seconds" << endl << endl;
}
long Timer :: getTimeInMicroseconds()
{
    return executionTime;
}


