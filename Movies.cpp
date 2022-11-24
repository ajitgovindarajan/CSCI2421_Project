//
// Created by agovi on 11/21/2022.
//
#include <iostream>
#include <string>
#include <fstream>
#include <Movies.h>
using namespace std;

void MovieBST::AddRecord(NodeMovie *leaf)
{

    //No elements add the root and set the key
    if (root == NULL)
    {
        // NodeActor *node = new NodeActor();

        //node->setKey(key);

        root = leaf;
    }
        // add a node
    else
        addRecord(leaf, root);
}
void MovieBST::addRecord(NodeMovie *node_to_add, NodeMovie *subtree_root)
{

    if (subtree_root == nullptr)
        subtree_root = node_to_add;
    else if (node_to_add->key < subtree_root->key)
        addRecord(node_to_add, subtree_root->leftNode);
    else if (node_to_add->key > subtree_root->key)
        addRecord(node_to_add, subtree_root->rightNode);
}

//Print Functions
void MovieBST::Print(ostream &stream)
{
    Print(stream, root);
}

void MovieBST::Print(ostream &stream, NodeMovie *subtree_root)
{
    if(subtree_root!= nullptr)
    {
        Print(stream, subtree_root->leftNode);
        stream << subtree_root->key << " ";
        Print(stream, subtree_root->rightNode);
    }
}