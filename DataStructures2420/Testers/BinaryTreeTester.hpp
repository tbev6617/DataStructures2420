//
//  BinaryTreeTester.hpp
//  DataStructures2420
//
//  Created by Bevan, Tyler on 3/27/18.
//  Copyright © 2018 Bevan, Tyler. All rights reserved.
//

#ifndef BinaryTreeTester_hpp
#define BinaryTreeTester_hpp

#include <iostream>
#include "../Model/Nodes/BinaryTreeNode.hpp"
#include "../Model/Structures/NonLinear/BinarySearchTree.hpp"

class BinaryTreeTester
{
private:
    BinaryTreeNode<int> testNode;
    BinarySearchTree<int> testTree;
    
public:
    void doTreeStuff();
};

#endif /* BinaryTreeTester_hpp */
