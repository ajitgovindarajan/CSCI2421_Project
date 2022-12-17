/*************************************************
 * Version: 12/16/2022
 * Movies.h instantiates the object of the Movies
 * and associates the data sets with the values of name, the year the movie was
 * made, the nominations for awards , the rating of the movie, the length of
 * movie, the genre of the movie, the release, ans the synopsis of the movie
 * Once the object is instantiated, the fields for each category get filled in
 * later for use of the other operations especially for the searching fields and
 * the exportation of the records for the final database. This provides the
 * frame work for when a record is added to ask for all the fields in the
 * container that is an movie
 * **************************************************/

#ifndef FINAL_PROJECT_MOVIES_H
#define FINAL_PROJECT_MOVIES_H
#include <fstream>
#include <iostream>
#include <string>
#include <utility>
#include <vector>
using namespace std;

struct Movies {
    string name;
    int year{};
    int nominations;
    int rating;
    int duration;
    string genre1;
    string genre2;
    string release;
    int metacritic;
    string synopsis;

    explicit Movies(std::vector<std::string> data) {
        try {
            name = data[0];
            year = stoi(data[1]);
            nominations = stoi(data[2]) ? data[2] != "-" : 0;
            rating = stoi(data[3]);
            duration = stof(data[4]);
            genre1 = data[5];
            genre2 = data[6];
            release = data[7];
            metacritic = stoi(data[8]);
            synopsis = data[9];
        } catch (...) {
            cerr << "Something is not right\n";
        }
    }
    explicit Movies(const string &movie_name) { name = movie_name; }

    bool operator<(const Movies &mviename) const {
        return (this->name < mviename.name);
    }

    friend std::ostream &operator<<(std::ostream &out, Movies &movies) {
        out << "Name: " << movies.name << endl;
        out << "Year: " << movies.year << endl;
        out << "Synopsis: " << movies.synopsis << endl;
        out << "Nominations: " << movies.nominations << endl;

        return out;
    }
};

#endif // FINAL_PROJECT_MOVIES_H
