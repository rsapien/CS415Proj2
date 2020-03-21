//
// Created by Robert Sapien on 3/20/20.
//

#ifndef CS415PROJ2_MASTER_DAG_HPP
#define CS415PROJ2_MASTER_DAG_HPP

#include <iostream>
#include <vector>
#include <queue>
#include <fstream>
using namespace std;

class DAG {
public:
    DAG(ifstream& dFile);
    struct Client;

    // gets data from the file
    void getData(ifstream& dFile);
    Client parseData(queue<int>& nums);

    //to do
    void createDAG();
    void output();

    // add more as needed

private:
    vector<Client> Clients; // Holds all clients

    // add more variables as needed

};

struct DAG::Client{
    Client():sDay{0}, eDay{}, wtp{0}{}
    vector<Client*> edges;
    int sDay, eDay, wtp; // start Day, end Day, willing to pay

    // add more if necessary
};


#endif //CS415PROJ2_MASTER_DAG_HPP
