/*************************************************
 * Version: 12/16/2022
 * functions.h provides all of the major functions for implementation of the
 * requirements for all user functions to the the database. Using the the other header files
 * The functions will be able to incorporate the main implementations from the binary search tree
 * to carry out search, sort, addition, deletion and other major operations in the database
 * **************************************************/

#ifndef FINAL_PROJECT_DUPLICATE_FUNCTIONS_H
#define FINAL_PROJECT_DUPLICATE_FUNCTIONS_H
#include "fileinputoutput.h"
#include "Movies.h"
#include "BST.h"
#include "actorActress.h"
#include <iostream>
#include <string>
#include <vector>
using namespace std;

void addMovie(BinarySearchTree<Movies> & movie){
    vector<std::string> newpIctureVec;
    cout << "Entering - Add The movie details"<< endl;
    string name,year,nominations,rating,duration,genre1,genre2,release,metacritic,synopsis;
    newactorvec.push_back(name,date);
    cout << "Enter name: ";
    cin >> name;
    cout << "Enter Year: ";
    cin >> year;
    cout << "Enter the nominations: ";
    cin >> nominations;
    cout << "Enter the film rating ";
    cin >> rating;
    cout << "Enter the length of the film: ";
    cin >> duration;
    cout << "Enter the genre: ";
    cin >> genre1;
    cout << "Enter the sub-genre: ";
    cin >> genre2;
    cout << "Enter the release year: ";
    cin >> release;
    cout << "Enter the metacritic ";
    cin >> metacritic;
    cout << "Enter the synopsis: ";
    cin >> synopsis;


    newpIctureVec.push_back(name);
    newpIctureVec.push_back(date);
    newpIctureVec.push_back(nominations);
    newpIctureVec.push_back(rating);
    newpIctureVec.push_back(duration);
    newpIctureVec.push_back(genre1);
    newpIctureVec.push_back(genre2);
    newpIctureVec.push_back(release);
    newpIctureVec.push_back(metacritic);
    newpIctureVec.push_back(synopsis);

    Movies movie_to_add(newpIctureVec);
    movie.insert(movie_to_add);
}

void addActor(BinarySearchTree<actor_actress> &actor)){
    // same method for the actor/actress
    // initialize everything in the right variable type
    cout << "Entering - Add Actor/actress"<< endl;
    string year,award,winner,name,film;
    vector<std::string> newactorvec;
    newactorvec.push_back(name,date);
    cout << "Enter name: ";
    cin >> name;
    cout << "Enter Year: ";
    cin >> year;
    cout << "Enter award: ";
    cin >> award;
    cout << "Enter winner status (1 for yes and 0 for no): ";
    cin >> winner;
    cout << "Enter Film: ";
    cin >> film;
    //separate

    newactorvec.push_back(year);
    newactorvec.push_back(award);
    newactorvec.push_back(winner);
    newactorvec.push_back(name);
    newactorvec.push_back(film);

    ActressActor actor_to_add(newpIctureVec);
    actor.insert(actor_to_add);
}

void modifyActor(BinarySearchTree<actor_actress> &act,const std::string & name){
    cout << "modification" << endl;
    // cin won't work because there are spaces
    // use the find function in the BST
    auto actress = act.get(ActressActor(name));
    if (act.contains(actress)){
        win = act.winner;
        if (win == 1) {
            act.win = "0";
        } else {
            act.win = "1";
        }
    } else {
        cerr << "Error!, Actor/Actress not found in database";
    }
    //actress.winner = false;
    cout << <<endl;
}

void modifyMovie(BinarySearchTree<Movies> &movie,const std::string & name){
    cout << "modification" << endl;
    // cin won't work because there are spaces
    // use the find function in the BST
    auto movie_to_search = movie.get(Movies(name));
    if (movie.contains(movies_to_search)){
        cout << movie << endl;
        movie.rating = 97;
    } else {
        cerr << "Error!, Movie not found in database";
    }
    cout << movie << endl;
}

void deleteMovie(BinarySearchTree<Movies> &movie,const std::string & name){
    auto movies_to_delete = Movies(movie_name);
    if (movie.contains(movies_to_delete)){
        movie.remove(movies_to_delete);
    } else {
        cerr << "Error!, Movie not found in database";
    }
}
void deleteActor(BinarySearchTree<actor_actress> &act,const std::string & name)){
    auto actor_del = ActressActor(name);
    if (act.contains(actor_del)){
        act.remove(act_del);
    } else {
        cerr << "Error!, Movie not found in database";
    }
}

ActressActor completeSearchActor(BinarySearchTree<actor_actress> &act,const std::string & name)){
    auto actress = ActressActor(name);
    if (act.contains(actress)){
        return act.get(actress);
    } else {
        cerr << "Error!, Movie not found in database";
        return NULL;
    }

}
// partial search of the movies database
Movies PartialSearchMovie(BinarySearchTree<Movies> &act,const std::string & movie_name)){
// comparison to fields and look through each
// mainly name and synopsis
 auto movie = Movies(movie_name);
 if (act.contains(movie_name)){
     return act.get(movie);

 } else {
     cerr << "Error!, Movie not found in database" << movie_name << "not in database";
     //return NULL;
 }
}


void printActress_sorted(BinarySearchTree<actor_actress> &act){
    act.printTree();
}

void printMovies_sorted(BinarySearchTree<Movies> &movie){
    movie.printTree();
}


#endif //FINAL_PROJECT_DUPLICATE_FUNCTIONS_H
