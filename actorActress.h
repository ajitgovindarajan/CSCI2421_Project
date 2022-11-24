//
// Created by agovi on 11/21/2022.
//

#ifndef FINAL_PROJECT_ACTORACTRESS_H
#define FINAL_PROJECT_ACTORACTRESS_H
#include <iostream>
#include <string>
#include <fstream>
using namespace std;

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
#endif //FINAL_PROJECT_ACTORACTRESS_H
