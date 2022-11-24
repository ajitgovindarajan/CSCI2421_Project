//
// Created by agovi on 11/21/2022.
//

#include "actorActress.h"

#include <iostream>
#include <string>
#include <fstream>
using namespace std;

// default constructor
ActorBST::ActorBST()
{
    root == nullptr;
}

// public function
void ActorBST::AddRecord(NodeActor *leaf)
{

    //No elements add the root and set the key
    if (root == nullptr)
    {
        NodeActor *node = new NodeActor();

        node->setKey(string key);

        root = leaf;
    }
        // add a node
    else
        addRecord(leaf, root);
}

//private function
void ActorBST::addRecord(NodeActor *node_to_add, NodeActor *subtree_root)
{

    if (subtree_root == nullptr)
        subtree_root = node_to_add;
    else if (node_to_add->key < subtree_root->key)
        addRecord(node_to_add, subtree_root->leftNode);
    else if (node_to_add->key > subtree_root->key)
        addRecord(node_to_add, subtree_root->rightNode);
}


//Print Functions
void ActorBST::Print(ostream &stream)
{
    Print(stream, root);
}

void ActorBST::Print(ostream &stream, NodeActor *subtree_root)
{
    if(subtree_root!= nullptr)
    {
        Print(stream, subtree_root->leftNode);
        stream << subtree_root->key << " ";
        Print(stream, subtree_root->rightNode);
    }
}

// delete function

//public
//void ActorBST::deleteRecord(NodeActor* leaf)
//{

//}


//private
void ActorBST::deleteRecord(NodeActor *node_to_delete,string key)
{

}




//public
NodeActor* ActorBST::findNode()
{

    return findNode();

}

//private
NodeActor* ActorBST::findNode(string key, NodeActor *subtree_root)

{

}
