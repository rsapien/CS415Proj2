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

    void topSort();
    void output();

private:
    void topSortUtil(int vert, bool visited[]);

    vector<Client*> adjClientList; // Holds all clients
    vector<Client> stack;

    int numVert;
    ifstream inFile;

};

class ADJList::Client{
public:
    Client(int s, int e, int w): sDay{s}, eDay{e}, weight{w}{}

    int getSD(){return sDay;}
    int getED(){return eDay;}
    int getWight(){return weight;}

    bool last(){ return visited;}
    void setLast(bool v){visited = v;}
private:
    int sDay, eDay, weight; // start Day, end Day, weight
    bool visited;
    Client* next;
};


#endif //CS415PROJ2_MASTER_ADJLIST_HPP
