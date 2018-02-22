//
//  Queue.hpp
//  DataStructures2420
//
//  Created by Bevan, Tyler on 2/22/18.
//  Copyright © 2018 Bevan, Tyler. All rights reserved.
//

#ifndef Queue_hpp
#define Queue_hpp

#include "LinkedList"
#include <iostream>
using namespace std;

template <class Type>
class Queue : public LinkedList<Type>
{
public:
    Queue();
    ~Queue();
    
    //Queue methods
    void enqueue(Type data);
    Type dequeue();
    Type peek();
    Type clear();
    
    //Overridden LinkedList methods
    void add(Type data);
    void addAtIndex(int index, type data);
    Type
}





#endif /* Queue_hpp */
