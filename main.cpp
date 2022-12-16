/*************************************************
 * Version: 12/16/2022
 * main,cpp is the driver code for this entire project. It will house the final main menu
 * that the user will use to decide what action will be done with the data base and which data
 * base will be affected.
 * **************************************************/

#include "fileinputoutput.h"
#include "Movies.h"
#include "BST.h"
#include "actorActress.h"
#include "functions.h"
#include "Exceptions.h"
#include <cassert>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    // variables for the menu input and conditional block
    int mainMenuInput;
    int databaseInput;
    fstream actDataBase;
    fstream pictureBase;
    //std::string file;
    string movie_name;
    string actor_name;

    BinarySearchTree<actorActress> actor_actress;
    BinarySearchTree<Movies> movie;

    string actor_actress_file = "../input/actor_actress.csv";
    string pictures_file = "../input/pictures.csv";

    ReadFromFile(actor_actress_file, actor_actress);
    read_movies(pictures_file, movie);

    actDataBase.open(actor_actress.csv);
    pictureBase.open(pictures.csv);


/*********************Main Menu*******************/
    cout << "Welcome to the Academy awards DataBase: " << endl;
    cout << "Please choose what you would like to do:" << endl;
    cout << "1. Movie database" << endl;
    cout << "2. Actor/Actress database" << endl;
    cin << databaseInput;
    if (databaseInput == 1) {
        cout << "You have chosen " << databaseInput << " which is the Movie database" << endl;
        cout << "1. add a Record of the Database" << endl;
        cout << "2. Search/ Modify a Record of the Database" << endl;
        cout << "3. Search/Delete a record from the database" << endl;
        cout << "4. Print the Sorted database" << endl;
        cout << "5.Partial Search of the Data base" << endl;
        cout << "6. Export Database to .CSV file" << endl;
        cout << "7. Exit" << endl;
        cin << mainMenuInput << endl;
        if (mainMenuInput == 1) {
            cout << "Add a record" << endl;
            addMovie(movie);
        } else if (mainMenuInput == 2) {
            cin.ignore();
            cout << "Enter a movie name: ";
            getline(cin, movie_name);
            modifyMovie(movie, movie_name);
        } else if (mainMenuInput == 3) {
            cout << "Delete Record of the Movies Database " << endl;
            cout << "Enter movie name" << endl;
            getline(cin, movie_name);
            deleteMovie(movie, movie_name);
        } else if (mainMenuInput == 4) {
            cout << "Print the Sorted Data Base " << endl;
            printMovies_sorted(movie);
        } else if (mainMenuInput == 5) {
            // partial search
        } else if (mainMenuInput == 6) {
            cout << "Exporting the Movie Data base to a new csv file" << std::endl;
            printMovies_toFile(movie);
        } else if (mainMenuInput == 7) {
            cout << "Exiting the program" << endl;
        } else {
            cout << "Not valid selection" << end;
        }
    } else if (databaseInput == 2) {
        cout << "You have chosen " << databaseInput << " which is the Actor/Actress database" << endl;
        cout << "1. add a Record of the Database" << endl;
        cout << "2. Search/ Modify a Record of the Database" << endl;
        cout << "3. Search/Delete a record from the database" << endl;
        cout << "4. Print the Sorted database" << endl;
        cout << "5.Partial Search of the Data base" << endl;
        cout << "6. Export Database to .CSV file" << endl;
        cout << "7. Exit" << endl;
        cin << mainMenuInput << endl;
        if (mainMenuInput == 1) {
            cout << "Add a record" << endl;
            addActor(actor_actress);
        } else if (mainMenuInput == 2) {
            cout << "Modify Record of the Actor/Actress Database " << endl;
            cin.ignore();
            cout << "Enter a Actor/ Actress name: ";
            getline(cin, actor_name);
            modifyMovie(actor_actress, actor_name);
        } else if (mainMenuInput == 3) {
            cout << "Delete Record of the Actor/Actress Database " << endl;
            cout << "Enter Actor/Actress name" << endl;
            getline(cin, actor_name);
            deleteMovie(actor_actress, actor_name);
        } else if (mainMenuInput == 4) {
            cout << "Print the Sorted Data Base " << endl;
            printActress_sorted(actor_actress);
        } else if (mainMenuInput == 5) {
            // partial search - ask for the name
            // partial search
        } else if (mainMenuInput == 6) {
            cout << "Exporting the Actor/Actress database to a new csv file" << std::endl;
            printActors_toFile(actor_actress);
        } else if (mainMenuInput == 7) {
            cout << "Exiting the program" << endl;
        } else {
            cout << "Not valid selection" << end;
        }
    } else {
        std::cout << "Not a valid selection, try again" << std::endl;
    }
}
