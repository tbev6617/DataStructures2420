//
//  BinaryTreeTester.cpp
//  DataStructures2420
//
//  Created by Bevan, Tyler on 3/27/18.
//  Copyright © 2018 Bevan, Tyler. All rights reserved.
//

#include "BinaryTreeTester.hpp"

void BinaryTreeTester :: doTreeStuff()
{
    testTree.insert(3);
    testTree.insert(1);
    testTree.insert(2);
    testTree.insert(-32460);
    
//    testTree.inOrderTraversal();
//    testTree.preOrderTraversal();
//    testTree.postOrderTraversal();
    
    cout << testTree.isComplete() << endl;
    cout << testTree.isBalanced() << endl;
    cout << testTree.getHeight() << endl;
    
    BinarySearchTree<string> wordTree;
    wordTree.insert("Apple");
    wordTree.insert("Banana");
    wordTree.insert("Cake");
    wordTree.insert("Tearing Me Apart Lisa");
    
    cout << wordTree.isComplete() << endl;
    cout << wordTree.isBalanced() << endl;
    cout << wordTree.getHeight() << endl;
}
