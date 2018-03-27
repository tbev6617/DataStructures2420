//
//  BinaryTreeNode.hpp
//  DataStructures2420
//
//  Created by Bevan, Tyler on 3/27/18.
//  Copyright © 2018 Bevan, Tyler. All rights reserved.
//

#ifndef BinaryTreeNode_hpp
#define BinaryTreeNode_hpp

#include <iostream>
using namespace std;

template <class Type>
class BinaryTreeNode
{
private:
    BinaryTreeNode<Type> * root;
    BinaryTreeNode<Type> * left;
    BinaryTreeNode<Type> * right;

public:
    binaryTreeNode();
    BinaryTreeNode(Type data);
    
    void setRootNode(BinaryTreeNode<Type> * root);
    void setLeftNode(BinaryTreeNode<Type> * left);
    void setRightNode(BinaryTreeNode<Type> * right);
    
    BinaryTreeNode<Type> * getRootNode();
    BinaryTreeNode<Type> * getLeftNode();
    BinaryTreeNode<Type> * getRightNode();
};

template <class Type>
BinaryTreeNode<Type> :: BinaryTreeNode() : Node<Type>()
{
    root = nullptr;
    left = nullptr;
    right = nullptr;
}

template <class Type>
BinaryTreeNode<Type> :: BinaryTreeNode(Type data) : Node<Type>(data)
{
    root = nullptr;
    left = nullptr;
    right = nullptr;
}

template <class Type>
BinaryTreeNode<Type> * BinaryTreeNode<Type> :: getRootNode()
{
    return this->root;
}

template <class Type>
BinaryTreeNode<Type> * BinaryTreeNode<Type> :: getRightNode()
{
    return this->right;
}

template <class Type>
BinaryTreeNode<Type> * BinaryTreeNode<Type> :: getLeftNode()
{
    return this->left;
}

template <class Type>
BinaryTreeNode<Type> :: setRootNode(BinaryTreeNode<Type> * newRoot)
{
    root = newRoot;
}

template <class Type>
BinaryTreeNode<Type> :: setRightNode(BinaryTreeNode<Type> * right)
{
    this->right = right;
}

template <class Type>
BinaryTreeNode<Type> :: setRightNode(BinaryTreeNode<Type> * left)
{
    this->left = left;
}

#endif /* BinaryTreeNode_hpp */
