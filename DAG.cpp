//
// Created by Robert Sapien on 3/20/20.
//

#include "DAG.hpp"

DAG::DAG(ifstream& dFile) { getData(dFile); }

void DAG::getData(ifstream& dFile){
    int num;
    queue<int> nums;
    while(dFile >> num){ // pushes all numbers from file into fcfs queue
        nums.push(num);
    }

    // pushes client to vector Clients
    Clients.push_back(parseData(nums));

    // createDAG();
}

// creates and returns a Client
DAG::Client DAG::parseData(queue<int>& nums){
    while(!nums.empty()){
        Client client;
        for(int i = 0; i < 3; i++){
            if(i == 0) {
                client.sDay = nums.front();
                nums.pop();
            }
            else if(i == 1) {
                client.eDay = nums.front();
                nums.pop();
            }
            else{
                client.wtp = nums.front();
                nums.pop();
            }
        }
    }

}

void DAG::createDAG() {

}

void DAG::output(){

}