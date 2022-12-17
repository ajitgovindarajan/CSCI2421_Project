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
    movie.Insert(movie_to_add);
}

void addActor(BinarySearchTree<ActressActor> &actor){
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

    ActressActor actor_to_add(newactorvec);
    actor.Insert(actor_to_add);
}

void modifyActor(BinarySearchTree<ActressActor> &act,const std::string & name) {
    cout << "modification" << endl;
    // cin won't work because there are spaces
    // use the find function in the BST
    auto actress = act.get(ActressActor(name));
    int choice;
    if (act.contains(actress)) {
        cout << "This program will modify the fields of the actor/actress? "
        cout << "Which field would you like to modify?" << endl;
        cout << "1)name\n"
                "2)year\n"
                "3)winner\n"
                "4)award\n"
                "5)film" << endl;
        cin >> choice;
        if (choice == 1) {
            std::string namer;
            cout << "you choose to modify the name, what is the new name you want ?";
            getline(cin, namer);
            act.name = namer;
        } else if (choice == 2) {
            int newYear;
            cout << "you choose to modify the year, what is the new year you want ?";
            getline(cin, newYear);
            act.year = to_string(newYear);
        } else if (choice == 3) {
            int win;
            cout << "you choose to modify the winner, what is the new winner field (1 for yes and 0 for yes) ?";
            getline(cin, win);
            if (win != 0) || (win != 1)
            {
                cout << "Not a valid modification to the winner field" << endl;
            } else {
                act.winner = to_string(win);
            }
        } else if (choice == 4) {
            cout << "you choose to modify the award, what is the new awards field you want ?";
            string prize;
            act.award = prize;
        } else if (choice == 5) {
            string flim;
            cout << "you choose to change the movie, what is the new movie you want ?";
            getline(cin, flim);
            act.film = flim;
        } else {
            cout << "Not a value record to modify" <<endl;
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
    int choice;
    auto movie_to_search = movie.get(Movies(name));
    if (movie.contains(movies_to_search)){
        cout << "This program will modify the fields of the movie, what is the new rating? "
        cout << "Which field would you like to modify?" << endl;
        cout << "1)name\n"
                "2)year\n"
                "3)nominations\n"
                "4)rating\n"
                "5)duration\n"
                "6)genre1\n"
                "7)genre2\n"
                "8)release\n"
                "9)metacritic\n"
                "10)synopsis"<<endl
        cin >> choice;
        if (choice == 1){
            std::string namer;
            cout << "you choose to modify the name, what is the new name you want ?";
            getline(cin,namer);
            movie.name = namer;
        } else if(choice == 2) {
            int newYear;
            cout << "you choose to modify the year, what is the new year you want ?";
            getline(cin,newYear);
            movie.year = to_string(newYear);
        } else if (choice ==3) {
            int nom;
            cout << "you choose to modify the nominations, what is the new nominations you want ?";
            getline(cin,nom);
            movie.nominations = to_string(nom);
        } else if(choice == 4) {
            cout << "you choose to modify the rating, what is the new rating you want ?";
            double rating;
            movie.rating = to_string(rating);
        } else if (choice ==5) {
            double length;
            cout << "you choose to modify the duration of the movie, what is the new duration you want ?";
            getline(cin,length);
            movie.duration = to_string(length);
        } else if(choice == 6) {
            std::string Newgenre;
            cout << "you choose to modify the genre of the movie, what is the new main genre you want ?";
            getline(cin,NewGenre);
            movie.genre1 = Newgenre;
        } else if (choice == 7) {
            double NewGenre2;
            cout << "you choose to modify the sub-genre of the movie, what is the new sub genre you want ?";
            getline(cin,NewGenre2);
            movie.genre2 = NewGenre2;
        } else if (choice == 8) {
            string newRelease;
            cout << "you choose to modify the release of the movie, what is the new release month you want ?";
            getline(cin,newRelease)
            movie.release = newRelease;
        } else if (choice == 9) {
            double meta;
            cout << "you choose to modify the metacritic of the movie, what is the new metacritic you want ?";
            getline(cin,meta);
            movie.metacritic = to_string(meta);
        } else if (choice == 10) {
            string synp;
            cout << "you choose to modify the synopsis of the movie, what is the new synopsis you want ?";
            getline(cin,synp);
            movie.synopsis = synp;
        } else {
            cout << "Not a valid record to modify" <<endl;
        }
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
void deleteActor(BinarySearchTree<ActressActor> &act,const std::string & name){
    auto actor_del = ActressActor(name);
    if (act.contains(actor_del)){
        act.remove(act_del);
    } else {
        cerr << "Error!, Movie not found in database";
    }
}

ActressActor completeSearchActor(BinarySearchTree<actor_actress> &act,const std::string & name){
    auto actress = ActressActor(name);
    auto release = ActressActor(year);
    auto recognition = ActressActor(award);
    auto champion = ActressActor(winner);
    auto movie = ActressActor(film);
    if (act.contains(actress)){
        return act.get(actress);
    }
    else if (act.contains(release)){
        return act.get(release);
    }
    else if (act.contains(recognition)){
        return act.get(recognition);
    }
    else if (act.contains(champion)){
        return act.get(champion);
    }
    else if (act.contains(movie)){
        return act.get(movie);
    }
    else {
        cerr << "Error!, Actress/Actor not found in database";
        return NULL;
    }

}
// partial search of the movies database
Movies PartialSearchMovie(BinarySearchTree<Movies> &act,const std::string & movie_name){
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
