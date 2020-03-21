//
// Created by Robert Sapien on 3/18/20.
//

#include "DAG.hpp"

using namespace std;

int main() {
    // Getting data file
    ifstream inFile;
    string fName;
    cout << "Enter the file to read the data: "; cin >> fName; cout << endl;

    inFile.open(fName);
    if(!inFile){
        cout << "Unable to open file.\nExiting..." << endl;
        exit(1);
    }

    DAG dag(inFile);
    inFile.close();
    // loo at DAG.hpp or README.txt for what needs to get done
    return 0;
}