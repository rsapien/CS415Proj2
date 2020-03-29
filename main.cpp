//
// Created by Robert Sapien on 3/18/20.
//

#include "ADJList.hpp"
#include <string>
#include <iostream>

using namespace std;

int main() {
    // Getting data file
    string fName;
    cout << "Enter a file to read in the data: "; cin >> fName; cout << endl;

    ifstream inFile;
    inFile.open(fName);
    if(!inFile.is_open()){
        cout << "Unable to open " << fName << ".\nExiting..." << endl;
        exit(1);
    }

    inFile.close();

    ADJList adjList(fName);
    adjList.getData();

    std::ofstream outFile;
    // look at ADJList.hpp or README.txt for what needs to get done

    return 0;
}