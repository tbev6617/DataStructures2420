//
//  Tree.hpp
//  DataStructures2420
//
//  Created by Bevan, Tyler on 3/27/18.
//  Copyright © 2018 Bevan, Tyler. All rights reserved.
//

#ifndef Tree_hpp
#define Tree_hpp

#include <../../Nodes/BinaryTreeNode.hpp>
template <class Type>
class Tree
{
protected:
    BinaryTreeNode<Type> * root;
public:
    //Information Methods
    virtual int getSize() = 0;
    virtual int getHeight() = 0;
    virtual bool isComplete() = 0;
    virtual bool isBalanced() = 0;
    
    //*Data methods*
    virtual void insert(Type data) = 0;
    virtual bool contains(Type data) = 0;
    virtual void remove(Type data) = 0;
    
    //*Traversals*
    virtual void inOrderTraversal() = 0;
    virtual void preOrderTraversal() = 0;
    virtual void postOrderTraversal() = 0;
    
};





#endif /* Tree_hpp */
