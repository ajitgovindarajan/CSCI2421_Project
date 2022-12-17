/*************************************************
 * Version: 12/16/2022
 * fileinputoutput.h provides all of the major methods of the implementation for the main
 * data base extraction that will then go through manipulation into the final database
 * that the user want to access
 * This file will read the data from the file, read specifcally from actors or actresses data
 * as well as exporting by printing as well
 * **************************************************/
#include <iostream>
#include <string>
#include "actorActress.h"
#include <fstream>
#include "BST.h"
#include <vector>
#include <sstream>
#include "Movies.h"
#include<cstring>
using namespace std;

#ifndef FINAL_PROJECT_FILEINPUTOUTPUT_H
#define FINAL_PROJECT_FILEINPUTOUTPUT_H


void tokenize(std::string const &str,const char delimit, std::vector<std::string> &out)
{
    std::stringstream ss(str);

    std::string s;

    while (std::getline(ss,s,delimit)){
        out.push_back(s);
    }
}

void ReadFromFile(string &filepath,BinarySearchTree<ActressActor> &bst){
    /*
    BinarySearchTree<ActressActor>ReadFromFile(std::string & filepath){
        BinarySearchTree<actorActress> tempor;
    }
     */
    fstream file(filepath);
    BinarySearchTree<ActressActor> tempor;
    if (!file.is_open()){
        cerr<<"Input file not found" << filepath<<endl;
        exit(EXIT_FAILURE);
    }
    string line;
    while (getline(file,line)){
        if (line == "Year,Award,Winner,Name,Film"){
            continue;
        vector<string> line_tokens;
        tokenize(line,',',line_tokens);


            //ActressActor actress_actor(year,role,rank,name,title);
        ActressActor actress_actor(line_tokens);
            //tempor.Insert(actress_actor);
        bst.Insert(actress_actor)
        }
        cout << "------------------------------------------------------------" << endl;
    }
}
void read_movies(string& pictures_filepath, BinarySearchTree<Movies> &bst){
    std::fstream file(pictures_filepath);

    if (!file.is_open()){
        cerr<<"Input file not found" << pictures_filepath<<endl;
        exit(EXIT_FAILURE);
    } else {
        string line;
        while (getline(file,line)){
            if (line.find("name,year,nominations,rating,duration,genre1,genre2,release,metacritic,synopsis")){
                continue;
            vector<string> line_tokens;
            tokenize(line,',',line_tokens);

            Movies movie(line_tokens);

            bst.Insert(movie);

            }
        }
    }
    cout << "------------------------------------------------------------" << endl;
}

void printMovies_toFile(BinarySearchTree<Movies> &act){
    ofstream output("FinalMovie.csv");
    output<< "name,year,nominations,rating,duration,genre1,genre2,release,metacritic,synopsis";
    auto pictora = act.get(Movies("Casablanca"));
    cout << pictora << endl;
    output<<pictora.name<<","<<pictora.year << ",";
    output.close();
}

void printActors_toFile(BinarySearchTree<ActressActor> &act){
    ofstream output("FinalActors.csv");
    output<< "Year,Award,Winner,Name,Film";

    auto acc = act.get(ActressActor(name));
    output<<acc.year<<","<<acc.award<<","<<acc.film<<","<<acc.winner<<","<<acc.name;
//iterate over the full binary search tree
// just call is recrusively
// add a find and iterators
/*
for (act.)
*/
// loop through and write is through the csv
}

#endif //FINAL_PROJECT_FILEINPUTOUTPUT_H
