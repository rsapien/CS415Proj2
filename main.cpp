//
// Created by Robert Sapien on 3/18/20.
//

#include <iostream>
#include <vector>
#include <fstream>

using namespace std;

struct Client{
    int sDay, eDay, wtp; // start Day, end Day, willing to pay
};

void getData(vector<Client>& Clients, ifstream& dFile){

}

void output(){

}

int main() {
    vector<Client> Clients; // array to hold clients

    // Getting data file
    ifstream inFile;
    string fName;
    cout << "Enter the file to read the data: "; cin >> fName; cout << endl;

    inFile.open(fName);
    if(!inFile){
        cout << "Unable to open file.\nExiting..." << endl;
        exit(1);
    }

    getData(Clients, inFile);
    inFile.close();
    return 0;
}