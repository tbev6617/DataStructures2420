//
//  Hashtable.hpp
//  DataStructures2420
//
//  Created by Bevan, Tyler on 4/27/18.
//  Copyright © 2018 Bevan, Tyler. All rights reserved.
//

#ifndef Hashtable_hpp
#define Hashtable_hpp

#include "../Nodes/Hashnode.hpp"

template <class Type>
class Hashtable
{
private:
    HashNode<Type> ** internalStorage;
    long size;
    long capacity;
    double loadFactor;
    
    long getNextPrime();
    bool isPrime(long current);
    void resize();
    long findPosition(HashNode<Type>* insertedNode);
    long handleCollision(HashNode<Type>* insertedNode, long index);
    
public:
    Hashtable();
    ~Hashtable();
    
    void insert(Type data);
    long getSize();
};

template <class Type>
Hashtable<Type> :: Hashtable()
{
    capacity = 101;
    internalStorage = new HasNode<Type>[101];
    size = 0;
    loadFactor = .8;
}

template <class Type>
Hashtable<Type> :: ~Hashtable()
{
    delete [] internalStorage;
}

template <class Type>
long Hashtable<Type> :: getNextPrime()
{
    return -1;
}

template <class Type>
void Hashtable<Type> :: resize()
{
}

template <class Type>
void Hashtable<Type> :: insert(Type value)
{
}

template <class Type>
long Hashtable<Type> :: findPosition(HashNode<Type> * insert)
{
    return -1;
}

template <class Type>
long Hashtable<Type> :: handleCollision(HashNode<Type> *, long index)
{
    return -1;
}

template <class Type>
long Hashtable<Type> :: getSize()
{
    return -1;
}










#endif /* Hashtable_hpp */
