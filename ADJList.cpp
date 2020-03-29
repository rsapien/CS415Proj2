//
// Created by Robert Sapien on 3/20/20.
//

#include "ADJList.hpp"
#include <iostream>

// ----- Client Functions ----- //

Client::Client(int s, int e, int w, int v): sDay{s},
                                    eDay{e},
                                    weight{w},
                                    cNum{v},
                                    visited{false}{}
int Client::getSD(){return sDay;}
int Client::getED(){return eDay;}
int Client::getWight(){return weight;}
int Client::getCNum(){return cNum;}

// ----- ADJList Functions ----- //

ADJList::ADJList(string dFile): numVert{0} {
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
    parseData(nums);

    /*for(auto & Client : ClientList){
        cout << Client.getSD() << " " << Client.getED() << " " << Client.getWight() << endl;
    }*/

    createAdj();
}

// creates and returns a Client
void ADJList::parseData(queue<int>& nums){
    while(!nums.empty()){
        int s, e, w;

        s = nums.front();
        nums.pop();

        e = nums.front();
        nums.pop();

        w = nums.front();
        nums.pop();

        ++numVert;
        Client c(s, e, w, numVert);
        ClientList.push_back(c);
    }
}

void ADJList::createAdj(){
    for(int i = 0; i < ClientList.size(); i++){
        for(int j = 0; i < ClientList.size(); i++){
            if(ClientList[j].getSD() > ClientList[i].getED() && i != j)
                ClientList[i].adjList.push_back(ClientList[j]);
        }
    }
}

void ADJList::printAdj() {
    for(int i = 0; i < ClientList.size(); i++){
        cout << "Client " << ClientList[i].getCNum() << " : ";
        for(int j = 0; j < ClientList[i].adjList.size(); j++){
            cout << "c" << ClientList[i].adjList[j].getCNum() << ' ';
        }
        cout << endl;
    }
}