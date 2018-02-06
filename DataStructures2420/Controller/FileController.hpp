//
//  FileController.hpp
//  DataStructuresProject
//
//  Created by Bevan, Tyler on 1/31/18.
//  Copyright © 2018 Bevan, Tyler. All rights reserved.
//

#ifndef FileController_hpp
#define FileController_hpp

#include "../Data/CrimeData.hpp"
#include <stdio.h>
#include <string>
#include <fstream>
#include <iostream>
#include <vector>
#include <sstream>

class FileController
{
public:
    static vector<CrimeData> readCrimeDataToVector(string filename);
};

#endif /* FileController_hpp */
