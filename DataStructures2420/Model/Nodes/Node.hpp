//
//  Node.hpp
//  DataStructures2420
//
//  Created by Bevan, Tyler on 2/6/18.
//  Copyright © 2018 Bevan, Tyler. All rights reserved.
//

#ifndef Node_hpp
#define Node_hpp


template <class Type>
class Node
{
private:
    
protected:
    Type data;
public:
    Node();
    Node(Type data);
    void setData(Type data);
    Type getData();
};

template <class Type>
Node<Type> :: Node()
{
    
}

template <class Type>
Node<Type> :: Node(Type data)
{
    this -> data = data;
}

template <class Type>
void Node<Type> ::setData(Type data)
{
    this -> data = data;
}

template <class Type>
Type Node<Type> :: getData()
{
    return data;
}


#endif /* Node_hpp */
