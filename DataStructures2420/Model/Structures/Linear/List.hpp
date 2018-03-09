//
//  List.hpp
//  DataStructures2420
//
//  Created by Bevan, Tyler on 2/12/18.
//  Copyright © 2018 Bevan, Tyler. All rights reserved.
//

#ifndef List_hpp
#define List_hpp
#include <stdio.h>
#include <assert.h>
#include "../../Nodes/LinearNode.hpp"

template <class Type>
class List
{
protected:
    int size;
public:
    //Structure
    virtual void add(Type item) = 0;
    virtual void addAtIndex(int index, Type item) = 0;
    virtual Type remove(int index) = 0;
    virtual Type getFromIndex(int index) = 0;
    
    //Helper
    virtual int getSize() const = 0;
    virtual LinearNode<Type> * getFront() = 0;
    virtual LinearNode<Type> * getEnd() = 0;
};

#endif /* List_hpp */
