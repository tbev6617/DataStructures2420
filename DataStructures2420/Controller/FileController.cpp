//
//  FileController.cpp
//  DataStructuresProject
//
//  Created by Bevan, Tyler on 1/31/18.
//  Copyright © 2018 Bevan, Tyler. All rights reserved.
//

#include "FileController.hpp"

using namespace std;

vector<CrimeData> FileController :: readCrimeDataToVector(string fileName)
{
    vector<CrimeData> crimeVector;
    string currentCSVLine;
    int rowCount = 0;
    
    ifstream dataFile(fileName);
    
    //If the file exists at that path
    if (dataFile.is_open())
    {
        //eof means end of file
        while (!dataFile.eof())
        {
            getline(dataFile, currentCSVLine, '\n');
            if (rowCount != 0)
            {
                //Create a CrimeData instance from the line
                if(currentCSVLine.length() != 0)
                {
                    CrimeData row(currentCSVLine);
                    crimeVector.push_back(row);
                }
                
            }
            rowCount++;
        }
        dataFile.close();
    }
    else
    {
        cerr << "NO FILE" << endl;
    }
    
    return crimeVector;
}




