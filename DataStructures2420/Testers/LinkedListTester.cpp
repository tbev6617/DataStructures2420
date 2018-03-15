//
//  LinkedListTester.cpp
//  DataStructures2420
//
//  Created by Bevan, Tyler on 2/28/18.
//  Copyright © 2018 Bevan, Tyler. All rights reserved.
//

#include "LinkedListTester.hpp"

void LinkedListTester :: testListBasics()
{
    LinkedList<int> numbers;
    numbers.add(9);
    cout << numbers.getFront()->getData() << ", Front of list should be 9" << endl;
    cout << numbers.getEnd()->getData() << ", End of list should be 9" << endl;
    
    numbers.add(0);
    cout << numbers.getFront()->getData() << ", Front of list should be 9" << endl;
    cout << numbers.getEnd()->getData() << ", End of list should be 0" << endl;
    
    numbers.addAtIndex(1, 2);
    numbers.add(324);
    
    cout << numbers.getFront()->getData() << ", Front of list should be 9" << endl;
    cout << numbers.getEnd()->getData() << ", End of list should be 324" << endl;
    
    cout << "the following loop should print 4 lines" << endl;
    for(int i = 0; i < numbers.getSize(); i++)
    {
        cout << numbers.getFromIndex(i) << endl;
    }
    
    numbers.remove(0);
    numbers.add(12345);
    numbers.addAtIndex(0, 2319);
    
    cout << numbers.getFront()->getData() << ", Front of list should be 2319" << endl;
    cout << numbers.getEnd()->getData() << ", End of list should be 12345" << endl;
}

void LinkedListTester :: testListWithData()
{
    Timer listTimer;
    
    listTimer.startTimer();
    LinkedList<CrimeData> crimes = FileController :: readDataToList("/Users/tbev6617/Documents/Data Structures/DataStructures2420/DataStructures2420/Data/crime.csv");
    listTimer.stopTimer();
    cout << "this is how long it took to read the crimeData" << endl;
    listTimer.displayInformation();
    
    listTimer.resetTimer();
    cout << "Here is how long it takes to access a random value" << endl;
    listTimer.startTimer();
    int randomLocation = (rand() * rand()) % crimes.getSize();
    cout << "The random index is " << randomLocation << endl;
    double totalViolentRate = crimes.getFromIndex(randomLocation).getAllViolentRates();
    listTimer.stopTimer();
    cout << "The random crime stat is: " << totalViolentRate << ", and here is the time" << endl;
    listTimer.displayInformation();
}
