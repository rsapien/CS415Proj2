//
// Created by Robert Sapien on 3/20/20.
//

#ifndef CS415PROJ2_MASTER_ADJLIST_HPP
#define CS415PROJ2_MASTER_ADJLIST_HPP


#include <vector>
#include <queue>
#include <fstream>
using namespace std;

class ADJList {
public:
    ADJList(string dFile);
    struct Client;

    // gets data from the file
    void getData();
    void parseData(queue<int>& nums);

    void createAdj();
    void printAdj();

    //void topSort();
    //void output();

private:
    static vector<Client> ClientList; // Holds all clients

    int numVert;
    ifstream inFile;

};

class Client{
public:
    Client(int s, int e, int w, int v);

    int getSD();
    int getED();
    int getWight();
    int getCNum();

    vector<Client> adjList; // Holds adjacency list



private:
    int sDay, eDay, weight, cNum; // start Day, end Day, weight
    bool visited;
};


#endif //CS415PROJ2_MASTER_ADJLIST_HPP
