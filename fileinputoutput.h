/*************************************************
 * Version: 12/16/2022
 * fileinputoutput.h provides all of the major methods of the implementation for
 * the main data base extraction that will then go through manipulation into the
 * final database that the user want to access This file will read the data from
 * the file, read specifcally from actors or actresses data as well as exporting
 * by printing as well
 * **************************************************/
#include "BST.h"
#include "Movies.h"
#include "actorActress.h"
#include <cstring>
#include <fstream>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
using namespace std;

#ifndef FINAL_PROJECT_FILEINPUTOUTPUT_H
#define FINAL_PROJECT_FILEINPUTOUTPUT_H

void tokenize(std::string const &str, const char delimit,
              std::vector<std::string> &out) {
    std::stringstream ss(str);

    std::string s;

    while (std::getline(ss, s, delimit)) {
        out.push_back(s);
    }
}

void ReadFromFile(string &filepath, BinarySearchTree<ActressActor> &bst) {
    fstream file(filepath);

    if (!file.is_open()) {
        cerr << "Input file not found" << filepath << endl;
        exit(EXIT_FAILURE);
    }
    string line;
    while (getline(file, line)) {
        if (line == "Year,Award,Winner,Name,Film") {
            continue;
            vector<string> line_tokens;
            tokenize(line, ',', line_tokens);

            ActressActor actress_actor(line_tokens);

            bst.Insert(actress_actor);
        }
        cout << "------------------------------------------------------------"
             << endl;
    }
}
void read_movies(string &pictures_filepath, BinarySearchTree<Movies> &bst) {
    std::fstream file(pictures_filepath);

    if (!file.is_open()) {
        cerr << "Input file not found" << pictures_filepath << endl;
        exit(EXIT_FAILURE);
    }
    std::string liner;
    while (getline(file, liner)) {
        if (liner == "name,year,nominations,rating,duration,genre1,genre2,release,"
                    "metacritic,synopsis") {
            vector<string> line_tokens;
            tokenize(liner, ',', line_tokens);
            Movies movie(line_tokens);
            bst.Insert(movie);
        }
        cout << "------------------------------------------------------------"
             << endl;
    }
}

void printMovies_toFile(BinarySearchTree<Movies> &act) {
    ofstream output("FinalMovie.csv");
    output << "name,year,nominations,rating,duration,genre1,genre2,release,"
              "metacritic,synopsis";

    for (auto &acc : act) {
        output << acc.name << "," << acc.year << "," << acc.nominations << ","
               << acc.rating << "," << acc.duration << "," << acc.genre1 << ","
               << acc.genre2 << "," << acc.release << "," << acc.metacritic << ","
               << acc.synopsis;
    }
    output.close();
}

void printActors_toFile(BinarySearchTree<ActressActor> &act) {
    ofstream output("FinalActors.csv");
    output << "Year,Award,Winner,Name,Film";

    for (auto &acc : act) {
        output << acc.year << "," << acc.award << "," << acc.film << ","
               << acc.winner << "," << acc.name;
    }
}

#endif // FINAL_PROJECT_FILEINPUTOUTPUT_H
