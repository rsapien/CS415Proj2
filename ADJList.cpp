//
// Created by Robert Sapien on 3/20/20.
//

#include "ADJList.hpp"
#include <iostream>

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

    // creates clients from data and pushes them to vector adjClientList
    parseData(nums);

    for(auto & Client : adjClientList){
        //cout << Client->getSD() << " " << Client->getED() << " " << Client->getWight() << endl;
        numVert++;
    }
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

        Client* client = new Client(s, e, w);
        adjClientList.push_back(client);
    }
}

void ADJList::createAdj(){
    for(int i = 0; i < adjClientList.size(); )
}
