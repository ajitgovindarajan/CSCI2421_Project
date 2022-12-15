//
// Created by agovi on 11/30/2022.
//
#include <iostream>
#include <string>
#include "actorActress.h"
#include <fstream>
#include "BST.h"
#include <vector>
#include <sstream>
#include "Movies.h"
#ifndef FINAL_PROJECT_FILEINPUTOUTPUT_H
#define FINAL_PROJECT_FILEINPUTOUTPUT_H


void ReadFromFile(string & filepath,BinarySearchTree<actorActress> &bst){
    fstream file(filepath);

    if (!file.is_open()){
        cerr<<"Input file not found" << filepath<<endl;
        exit(EXIT_FAILURE);
    }
    // hint delimiter
    // use tokenise function for delimit from the commas
    string line
    while (getline(file,line)){
        if (line = "Year,Award,Winner,Name,Film"){
            continue;
        }
        vector <string> line_tokens;

        tokenize(line,',',line_tokens);
        //cout << line << endl;

        actorActress actorActress(line_tokens);

        bst.insert(actorActress)

        for (auto item: lineTokens){
            cout << item << endl;
        }
        cout << "------------------------------------------------------------" << endl;
    }
}
void read_movies(string& pictures_filepath, BinarySearchTree<>()){
    fstream file(pictures_filepath);

    if (!file.is_open()){
        cerr<<"Input file not found" << pictures_filepath<<endl;
        exit(EXIT_FAILURE);
    }
    // hint delimier
    // use tokenise function for delimit from the commas
    string line
    while (getline(file,line)){
        // using a hack here
        if (line.find("duration,genre1,genre2,release,metacritic,")=13){
            continue;
            //counter++;
        }
        vector <string> line_tokens;

        tokenize(line,',',line_tokens);
        //cout << line << endl;

        Movies movies(line_tokens);

        bst.insert(movies);

        for (auto item: lineTokens){
            cout << item << endl;
        }
        cout << "------------------------------------------------------------" << endl;
    }
}

BinarySearchTree<actorActress> ReadFromFile(string & filepath){
    // need a binary search tree types
    // use bst.h file from hw 3
    BinarySearchTree<actorActress> tempor;

    auto actors =
    return tempor;
}

void printMovies_toFile(BinarySearchTree<Movies> &act){
    ofstream output("FinalMovie.csv");
    output>> "Header of the original file";
    auto pictora = act.get(act("Casablanca"));
    cout << pictora << endl;
    output<<pictora.name<<","<<pictora.year << ",";
    output.close();
}

void printActors_toFile(BinarySearchTree<ActressActor> &act){
    ofstream output("FinalActors.csv");
    output>> "Header of the original file";

    auto acc = act.get(ActressActor(name));
    output<<acc.year<<","<<acc.award<<","acc.film<<","<<acc.winner<<","<<acc.name;
    for (auto &acc)
//iterate over the full binary search tree
// just call is recrusively
// add a find and iterators
/*
for (act.)
*/
// loop through and write is through the csv
}

#endif //FINAL_PROJECT_FILEINPUTOUTPUT_H
