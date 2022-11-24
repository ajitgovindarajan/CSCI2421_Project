//
// Created by agovi on 11/21/2022.
//
#include <iostream>
#include <string>
#include <fstream>
#include <Movies.h>
#include "actorActress.h"
using namespace std;

int main() {
    // variables for the menu input and conditional block
    int mainMenuInput;
    int userInputSearch;
    int userInputAdd;
    int userInputModify;
    int userInputDelete;
    int userInputExport;
    fstream actDataBase;
    fstream pictureBase;
    //std::string file;

    actDataBase.open(actor_actress.csv);
    pictureBase.open(pictures.csv);

/*********************Main Menu*******************/
    cout << "Welcome to the Academy awards DataBase: "<< endl;
    cout << "Please choose what you would like to do:"<< endl;
    cout << "1. Search DataBase"<< endl;
    cout << "2. Add Record to Database"<< endl;
    cout << "3. Modify a Record of the Database"<< endl;
    cout << "4, Delete a record from the database"<< endl;
    cout << "5. Export Database to .CSV file"<< endl;
    cout << "6. Exit"<< endl;
    cin >> mainMenuInput;

    if (mainMenuInput ==1 )
    {
        cout << "Which DataBase would you like to Search"<<endl;
        cout << "1. Actor-Actress Database"<< endl;
        cout << "2. Movies Database"<< endl;
        cin >> userInputSearch;

        if (userInputSearch==1)
        {
            cout << "Search the Actor-Actress Database"<< endl;
            // call search Function for Actor-Actress database
        } else if (userInputSearch == 2) {
            std::cout << "Search the database of movies" << std::endl;
        } else {
            std::cout << "Not a valid selection, please try again" <<std::endl
        }
    } else if (mainMenuInput == 2) {
        cout << "Which Database would you like to add a record to: "<< endl;
        cout << "1. Actor-Actress Database"<< endl;
        cout << "2. Movies Database"<< endl;
        cin  >> userInputAdd;

        if (userInputAdd==1)
        {
            cout << "Add record to Actor-Actress Database"<< endl;
            // call function for ActorBST::addRecord

        }
        else if (userInputAdd==2)
        {
            cout << "Add record to Movies Database"<< endl;
            //call function for MovieBST::addRecord
        }
        else
        {
            cout << "Please Make a Valid Selection"<< endl;
            cin >> userInputAdd;
        }
    } else if (mainMenuInput == 3) {
        cout << "Which Database would you like to modify a record in:"<< endl;
        cout << "1. Actor-Actress Database"<< endl;
        cout << "2. Movies Database"<< endl;
        cin >> userInputModify;

        if (userInputModify==1)
        {
            cout << "Modify Record of the Actor-Actress Database "<< endl;
            // call ActorBST::modifyRecord
        }
        else if (userInputModify==2)
        {
            cout << "Modify Record of the Movie Database"<< endl;
            // call MovieBST::modifyRecord
        }
        else
        {
            cout << "Please make a valid selection"<< endl;
            cin >> userInputModify;
        }
    } else if ( mainMenuInput == 4) {
        cout << "Which Database would you like to delete a record from"<< endl;
        cout << "1. Actor-Actress Database"<< endl;
        cout << "2. Movies Database"<< endl;
        cin >> userInputDelete;

        if (userInputDelete==1)
        {
            cout << "Delete a record from the Actor-Actress Database"<< endl;
            //call ActorBST::deleteRecord function
        }
        else if (userInputDelete==2)
        {
            cout << "Delete a record from the Movie Database"<< endl;
            //call MovieBST::deleteRecord function
        }
        else
        {
            cout << "Please make a valid selection"<< endl;
            cin >> userInputDelete;
        }
    } else if (mainMenuInput == 5) {
        cout << "Which Database would you like to Export to .CSV file "<< endl;
        cout << "1. Actor-Actress Database"<< endl;
        cout << "2. Movies Database"<< endl;
        cin >> userInputExport;

        if (userInputExport==1)
        {
            cout <<"Export the Actor-Actress Database"<< endl;
            // call file export
        }
        else if (userInputExport==2)
        {
            cout <<"Export the Movie Database"<< endl;
            //call file export
        }
    } else if (mainMenuInput == 6) {
        std::cout << "Exiting" <<std::endl;
    }  else {
        std::cout << "Not a valid selection, try again" <<std::endl;
    }
}