/*************************************************
 * Version: 12/16/2022
 * actorActress.h instantiates the object of the actorActress
 * and associates the data sets with the values of neame, award won, the year it was won
 * whether the actor/actress was a winner of an award and the film name that the award was won
 * for.
 * Once the object is instantiated, the fields for each category get filled in later for use of
 * the other operations especially for the searching fields and the exportation of the records
 * for the final database. This provides the frame work for when a record is added to ask for
 * all the fields in the container that is an actor or a actress
 * **************************************************/
// need unique writeup- in the readme of how each student contributed in each way

#ifndef FINAL_PROJECT_ACTORACTRESS_H
#define FINAL_PROJECT_ACTORACTRESS_H

#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <utility>
using namespace std;


struct ActressActor{
     unsigned int year;
     std::string award;
     //int winner;
     short int winner;
     // could also do
     // bool winner;
     std::string name;
     std::string film;

    explicit ActressActor(std::vector<std::string> data){
        year = stoi(data[0]);
        award = data[1];
        winner = stoi(data[2]);
        name = data[3];
        film = data[4];
    }

    explicit ActressActor(std::string name) {
        this->name = std::move(name);
    }

    friend std::ostream& operator << (ostream& out, ActressActor& actorActress){
        out << "Name; " << actorActress.name <<endl;
        out << "Film: " << actorActress.film <<endl;
        out << "Role: " << actorActress.award <<endl;
        out << "Year: " << actorActress.year <<endl;
        out << "Rank: " << actorActress.winner <<endl;

        return out;
    }
    bool operator < (const ActressActor &actor) const {
        return (this->name < actor.name);
    }
};
#endif //FINAL_PROJECT_ACTORACTRESS_H
