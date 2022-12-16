//
// Created by agovi on 11/21/2022.
//

#ifndef FINAL_PROJECT_MOVIES_H
#define FINAL_PROJECT_MOVIES_H
#include <iostream>
#include <string>
#include <fstream>
using namespace std;

class NodeMovie // movie class containing attributes such as year,nominations,rating,genre and synopsis.
{
    NodeMovie();
    NodeMovie(string name, int year, int nominations, double rating, string genre1, string genre2,NodeMovie* left, NodeMovie* right){}
    void setKey(string key){}

public:
    string key;
    NodeMovie* leftNode;
    NodeMovie* rightNode;
};

class MovieBST
{
private:
    NodeMovie* root;
    void addRecord(NodeMovie *node_to_add,NodeMovie *subtree_root );
    void Print(ostream& stream,NodeMovie* subtree_root);
    void deleteRecord(NodeMovie *node_to_delete );

    string name;
    int year;
    int nominations;
    double rating;
    string genre1;
    string genre2;
    string release;
    int metacritic;
    string synopsis;



public:
    MovieBST();
    void setKey(string key){};
    string key();
    void AddRecord(NodeMovie* leaf); // function that will add a record
    void ModifyRecord(string, int ); // function that will modify a record
    void DeleteRecord(NodeMovie* leaf); // function that will delete a record
    void Print(ostream& stream); // function that will export to file


    //getters to get the parameters required
    string getName(){return name;};
    int getNomination(){return nominations;};
    double getRating(){return rating;};
    string getGenre1(){return genre1;};
    string getGenre2(){return genre2;};
    string getRelease(){return release;};
    int getMetacritic(){return metacritic;};
    string getSynopsis(){return synopsis;};


    //setters to set parameters wherever required 
    void setName(string _name);
    void setNomination(int _nominations);
    void setRating(double _rating);
    void setGenre1(string _genre1);
    void setGenre2(string _genre2);
    void setRelease(string _release);
    void setMetacritic(int _metacritic);
    void setSynopsis(string _synopsis);


};
#endif //FINAL_PROJECT_MOVIES_H
