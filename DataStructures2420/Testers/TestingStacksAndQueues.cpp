//
//  TestingStacksAndQueues.cpp
//  DataStructures2420
//
//  Created by Bevan, Tyler on 3/23/18.
//  Copyright © 2018 Bevan, Tyler. All rights reserved.
//

#include "TestingStacksAndQueues.hpp"

void TestingStacksAndQueues :: queueVersusList()
{
    
}

void TestingStacksAndQueues :: stackVersusQueue()
{
    //TODO pg 4
}

void TestingStacksAndQueues :: stackVersusList()
{
    Stack<int> numberStack;
    LinkedList<int> numberList;
    Timer stackTimer, listTimer;
    
    for(int index = 0; index < 10; index++)
    {
        numberStack.add(index);
        numberList.add(index);
    }
    cout << "getting the third from last item from the structure" << endl;
    
    int index = 0;
    int value = -99;
    stackTimer.startTimer();
    
    while (index < 7)
    {
        cout << numberStack.pop() << endl;
        
        index ++;
    }
    stackTimer.stopTimer();
    index = 0;
    listTimer.startTimer();
    value = numberList.getFromIndex(7);
    listTimer.stopTimer();
    cout << "The time it took to work with Stack" << endl;
    stackTimer.displayInformation();
    cout << "The time it took to work with List" << endl;
    listTimer.displayInformation();
    
    cout << "What is left in the stack" << endl;
    LinkedList<int> * listVersion = &numberStack;
    int stackSize = listVersion->getSize();
    cout << "Stack size is: " << stackSize << endl;
    for(int index = 0; index < stackSize; index++)
    {
        cout << numberStack.pop() << endl;
    }
    cout << "What is left in the list" << endl;
    cout << "List size is: " << numberList.getSize() << endl;
    for(int i = 0; i < numberList.getSize(); i++)
    {
        cout << numberList.getFromIndex(i) << "\t";
    }
}
