//
// Created by agovi on 11/21/2022.
//
// need unique writeup- in the readme of how each student contributed in each way

#ifndef FINAL_PROJECT_ACTORACTRESS_H
#define FINAL_PROJECT_ACTORACTRESS_H
#include <iostream>
#include <string>
#include <fstream>
#include <utility>
using namespace std;


struct ActressActor{
     unsigned int year;
     string award;
     //int winner;
     short int winner;
     // could also do
     // bool winner;
     string name;
     string film;

    explicit actorActress(vector<string> data){
        year = stoi(data[0]);
        award = data[1];
        winner = stoi(data[2]);
        name = data[3];
        film = data[4];
    }

    actorActress
    friend ostream operator << (ostream& out actorActress){
        out << "Name; " << actorActress.name <<endl;
        out << "Film: " << actorActress.film <<endl;
        out << "Role: " << actorActress.award <<endl;
        out << "Year: " << actorActress.year <<endl;
        out << "Winner: " << actorActress.winner <<endl;

        return out;
    }
    bool_operator < (const actorActress &actor) const {
        return (this-> name < actor.name);
    }
};

/*
class actorActress {
public:
    NodeActor();
    NodeActor(string year, string award, string winner, string film, string name,NodeActor* left, NodeActor* right){}
    void setKey(string key){}
    string key;
    NodeActor* leftNode;
    NodeActor* rightNode;

};

class ActorBST
{
private:
    NodeActor* root;
    void addRecord(NodeActor *node_to_add,NodeActor *subtree_root );
    void Print(ostream& stream,NodeActor* subtree_root);
    void deleteRecord(NodeActor *node_to_delete, string key );
    NodeActor* findNode(string key, NodeActor* subtree_root);

public:
    ActorBST();
    void setKey(string key){};
    string key();
    void AddRecord(NodeActor* leaf); // function that will add a record
    void ModifyRecord(string, int ); // function that will modify a record
    void DeleteRecord(NodeActor* leaf); // function that will delete a record
    void Print(ostream& stream); // function that will export to file
    NodeActor* findNode();



};
*/
#endif //FINAL_PROJECT_ACTORACTRESS_H
