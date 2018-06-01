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
    Queue<string> wordQueue;
    LinkedList<string> wordList;
    
    wordQueue.add("first");
    wordQueue.add("second");
    wordQueue.add("third");
    wordQueue.add("fourth");
    wordQueue.add("fifth");
    
    wordList.add("first");
    wordList.add("second");
    wordList.add("third");
    wordList.add("fourth");
    wordList.add("fifth");
    
    cout << "Queue: " << wordQueue.getFromIndex(0) << " versus List: " << wordList.getFromIndex(0) << endl;
    cout << "Here is in order removal in a queue: " << endl;
    wordQueue.clear();
    cout << "Here is a backwards order removal in a list:" << endl;
    for(int i = wordList.getSize() - 1; i >= 0; i--)
    {
        cout << wordList.remove(i) << endl;
    }
}

void TestingStacksAndQueues :: stackVersusQueue()
{
    vector<CrimeData> data = FileController :: readCrimeDataToVector("/Users/tbev6617/Documents/Data Structures/DataStructures2420/DataStructures2420/Data/crime.csv");
    
    Stack<CrimeData> crimeStack;
    Queue<CrimeData> crimeQueue;
    
    for(int index = 0; index < 100; index++)
    {
        CrimeData temp = data.at(index);
        crimeStack.push(temp);
        crimeQueue.enqueue(temp);
    }
    Queue<int> queue;
    Stack<int> stack;
    Queue<int> queueFromStack;
    Stack<int> stackFromQueue;
    
    for(int i = 0; i < 10; i++)
    {
        queue.enqueue(i);
        stack.push(i);
    }
    for(int i = 0; i < 10; i++)
    {
        cout << i << endl;
        cout << "Queue result: " << queue.dequeue() << endl;
        cout << "Stack result: " << stack.pop() << endl;
    }
    for(int i = 0; i < 10; i++)
    {
        queue.enqueue(i);
        stack.push(i);
    }
    for(int i = 0; i < 10; i++)
    {
        stackFromQueue.push(queue.dequeue());
        queueFromStack.enqueue(stack.pop());
    }
    for(int i = 0; i < 10; i++)
    {
        cout << i << endl;
        cout << "Stack result: " << stackFromQueue.pop() << endl;
        cout << "Queue result: " << queueFromStack.dequeue() << endl;
    }
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
