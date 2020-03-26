//
// Created by Robert Sapien on 3/20/20.
//

#include "DAG.hpp"

DAG::DAG(ifstream& dFile):numVert{0} {
    start = new Client;
    end = new Client;
    start->s = true;
    end->e = true;

    getData(dFile);
}

// gets data form file and puts it in fcfs queue
void DAG::getData(ifstream& dFile){
    int num;
    queue<int> nums;
    while(dFile >> num){ // pushes all numbers from file into fcfs queue
        nums.push(num);
    }

    while(!nums.empty()){
        cout << nums.front() << endl;
        nums.pop();
    }
    // creates clients from data and pushes them to vector Clients
    //parseData(nums);
}

// creates and returns a Client
void DAG::parseData(queue<int>& nums){
    while(!nums.empty()){
        Client* client = new Client;
        for(int i = 0; i < 3; i++){
            if(i == 0) {
                client->sDay = nums.front();
                Clients.push_back(client);
                nums.pop();
            }
            else if(i == 1) {
                client->eDay = nums.front();
                Clients.push_back(client);
                nums.pop();
            }
            else{
                client->wtp = nums.front();
                Clients.push_back(client);
                nums.pop();
            }
        }
        addEdge(client);
    }
}

void DAG::addEdge(Client* client) {
    if(!start->s){
        start->edges.push_back(client);
        client->next = end;
        end->edges.push_back(client);
        numVert++;
    }
    else{
        for(int i = 0; i < start->edges.size(); i++){
            if(start->edges[i]->e < client->s){

            }
        }
    }

}

DAG::Client DAG::findSmallest(){
    for(int i = 0; i < Clients.size(); i ++){
        for(int j = 0; j < Clients.size(); j ++){

        }
    }
}

void DAG::output(){

}