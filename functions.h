//
// Created by agovi on 12/5/2022.
//
#include "fileinputoutput.h"
#include "Movies.h"
#include "BST.h"
#include "actorActress.h"
#include <iostream>
#include <string>
#include <vector>
using namespace std;
#ifndef FINAL_PROJECT_DUPLICATE_FUNCTIONS_H
#define FINAL_PROJECT_DUPLICATE_FUNCTIONS_H

void addMovie(BinarySearchTree<Movies> & movie){
    vector<std::string> newpIctureVec;
    newpIctureVec.push_back(name,date);
    Movies movie_to_add(newpIctureVec);
    // or
    Movies movie_to_add(name, year /* add the variables*/);
    movie.insert(movie_to_add);
}

void addActor(BinarySearchTree<actor_actress> & actor)){
    // call function for ActorBST::addRecord
    // same method for the actor/actress
    // initialize everything in the right variable type
    vector<std::string> newactorvec;
    newactorvec.push_back(name,date);
    //separate
    actor_actress actor_to_add(newpIctureVec);
    // or
    actor_actress actor_to_add(name, year /* add the variables*/);
    actor_actress.insert(actor_to_add);
}

void modifyActor(BinarySearchTree<actor_actress> &act,const::std::string & name){
    cout << "modification" << endl;
    // cin wont work because there are spaces
    // use the find function in the BST
    auto actress = act.get(ActressActor(name));
    if ()
    //auto actor_to_search = act.find();
    // modify the winner
        actress.winner = false;
    cout << <<endl;
    // else return the user input is invaild
}

void modifyMovie(BinarySearchTree<Movies> &movie,const::std::string & name){
    cout << "modification" << endl;
    // cin wont work because there are spaces
    // use the find function in the BST
    auto movie_to_search = movie.get(Movies(name));
    // modify the rating
    cout << movie << endl;
    movie.rating = 97;

    cout << movie << endl;

}

void deleteMovie(BinarySearchTree<Movies> &movie,const::std::string & name){
    auto movies_to_delete = Movies(movie_name);
    if (movie.contains(movies_to_delete)){
        movie.remove(movies_to_delete);
    } else {
        cerr << "Error!, Movie not found in database";
    }
}
void deleteActor(BinarySearchTree<actor_actress> &act,const::std::string & name)){
    auto actor_del = ActressActor(name);
    if (act.contains(actor_del)){
        act.remove(act_del);
    } else {
        cerr << "Error!, Movie not found in database";
    }
}

ActressActor completeSearchActor(BinarySearchTree<actor_actress> &act,const::std::string & name)){
    auto actress = ActressActor(name);
    if (act.contains(actress)){
        return act.get(actress);
    } else {
        cerr << "Error!, Movie not found in database";
        return NULL;
    }

}

Movie PartialSearchMovie(BinarySearchTree<Movies> &act,const::std::string & movie_name)){
// comparison to fields and look through each
// mainly name and synopsis
 auto movie = Movies(movie_name);
 if (act.contains(movie_name)){
     return act.get(movie);
 } else {
     cerr << "Error!, Movie not found in database";
     return NULL;
 }
}
// in the main
// ask for the input
// movie = PartialSearchMovie(%database,name)
// declare as a movie object

void printActress_sorted(BinarySearchTree<actor_actress> &act){
    act.printTree();
}

void printMovies_sorted(BinarySearchTree<Movies> &movie){
    movie.printTree();
}


#endif //FINAL_PROJECT_DUPLICATE_FUNCTIONS_H
