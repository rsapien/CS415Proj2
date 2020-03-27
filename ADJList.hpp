//
// Created by Robert Sapien on 3/20/20.
//

#ifndef CS415PROJ2_MASTER_ADJLIST_HPP
#define CS415PROJ2_MASTER_ADJLIST_HPP

#include <iostream>
#include <vector>
#include <queue>
#include <fstream>
using namespace std;

class ADJList {
public:
    ADJList(string dFile);
    struct Client;

    // gets data from the file
    void getData(ifstream& dFile);
    void parseData(queue<int>& nums);

    Client findSmallest();

    //to do
    void addEdge(Client* client);
    void output();

    // add more as needed

private:
    vector<Client*> Clients; // Holds all clients

    Client* end;
    Client* start;

    // add more variables as needed
    int numVert;
    ifstream inFile;

};

struct ADJList::Client{
    Client():sDay{0}, eDay{0}, wtp{0}, s{false}, e{false}{}

    vector<Client*> edges;
    Client* next;

    int sDay, eDay, wtp; // start Day, end Day, willing to pay
    bool s, e;

    // add more if necessary
};


#endif //CS415PROJ2_MASTER_ADJLIST_HPP
