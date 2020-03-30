//
// Created by Robert Sapien on 3/20/20.
//

#include "ADJList.hpp"
#include <iostream>

// ----- Client Functions ----- //

ADJList::Client::Client(int s, int e, int w, int v){
    sDay = s;
    eDay = e;
    weight = w;
    cNum = v;
    visited = false;
}
int ADJList::Client::getSD(){return sDay;}
int ADJList::Client::getED(){return eDay;}
int ADJList::Client::getWeight(){return weight;}
int ADJList::Client::getCNum(){return cNum;}
bool ADJList::Client::isVisited(){return visited;}
void ADJList::Client::setVisited(bool b){visited = b;}

// ----- ADJList Functions ----- //

ADJList::ADJList(string& dFile): numVert{0} {
    inFile.open(dFile, std::ios::in);
}

// gets data form file and puts it in fcfs queue
void ADJList::getData(){
    int num;
    queue<int> nums;
    while(inFile >> num){ // pushes all numbers from file into fcfs queue
        nums.push(num);
    }

    // creates clients from data and pushes them to vector ClientList
    pData(nums);

    /*for(auto & i : ClientList){
        cout << i.getCNum() << " ";
        cout << i.getSD() << " ";
        cout << i.getED() << " ";
        cout << i.getWeight() << " ";
        cout << endl;
    }*/

    // adds adjacent vertices
    createAdj();
}

// creates and returns a Client
void ADJList::pData(queue<int>& nums){
    while(!nums.empty()){
        int sd;
        int ed;
        int w;

        sd = nums.front();
        nums.pop();

        ed = nums.front();
        nums.pop();

        w = nums.front();
        nums.pop();

        ++numVert;
        Client c(sd, ed, w, numVert);
        ClientList.push_back(c);
    }
}

void ADJList::createAdj(){
    for(int i = 0; i < ClientList.size(); i++){
        for(int j = 0; j < ClientList.size(); j++){

            /*cout << "i = " << i << " j = " << j << endl;
            cout << "c" << ClientList[i].getCNum() << " c" << ClientList[j].getCNum() << endl;
            cout << "j: " << ClientList[j].getSD() << endl;
            cout << "i: " << ClientList[i].getED() << endl << endl;*/

            if(ClientList[j].getSD() > ClientList[i].getED() && i != j){
                //cout << "hit\n" << endl;
                if(!checkADJ(ClientList[i].adjList, ClientList[j].getCNum())){
                    ClientList[i].adjList.push_back(ClientList[j]);
                    //cout << "added\n";
                }
            }
        }
    }
}

void ADJList::printAdj() {
    for(auto & i : ClientList){
        cout << "Client " << i.getCNum() << " : ";
        for(auto & j : i.adjList){
            cout << "c" << j.getCNum() << ' ';
        }
        cout << endl;
    }
}

void ADJList::resetVisited() {
    for(auto & c : ClientList){
        c.setVisited(false);
    }
}

bool ADJList::checkADJ(vector<ADJList::Client> adj, int num){
    for(auto & a : adj){
        if(a.getCNum() == num) return true;
    }
}