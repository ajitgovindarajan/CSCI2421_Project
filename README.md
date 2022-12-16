*******************************************************
*  Name      : 
*  Student ID:  107861904
*  Email     : 
*  Class     :  CSCl 2421 Section 001
*  HW#       :  Final Project
*  Due Date  :  Dec. 16, 2022
*******************************************************


                 Read Me


*******************************************************
# Description of the program
*******************************************************
1. This program will demonstrate the basic functions using a series of provided databases with respect to movies
and actor/actress information that will be demonstrated with 4 main functions: search, delete and modify
2. The program will greet the user with a choice of either the movies data with information such as name, year, and 
nomination for the movie. On the other side, the actor actress file will have name, awards and various tidbits of 
information
3. The secondary user menu will then prompt the user for a choice whether they want to add, delete, search, modify, and
export the records to a new csv file once the user asks them to
4. This program allows for full compatibility of data base using the data structure of the binary search trees to 
efficiently add, search, delete to the records, in this case for a container of infomration for each name field


*******************************************************
# Source files
*******************************************************

* BST.h - The file contains the BST class which includes all the implemented methods of the binary
search trees. The main functions include _findMin, _findMax, _printTreeInorder, _ printTreePostOrder,
_printTreePreOrder, and _height.
* Exceptions.h - This file makes sure the exceptions are highlighted for the possible error handling.This file
mainly handles the potential errors that can come and make sure the code doesn't crash
* actorActress.h - This file will instantiate the object of the actors and actresses along with the criteria provided
in the csv file of the actor and actress data base
* Movies.h - This file will instantiate the object of the movies/ pictures along with the criteria provided
in the csv file of the movie information 
* fileinputoutput.h - This file will handle all the file handling of the csv files of the file data bases. This will 
opening of the original csv files as well as the export of the finished records into a file of the users' choosing
* functions.h- this file contains the functions that are needed to fulfill the requirements in this 
project. Including the searching, adding, delete, modify function are all contained within this file
* main.cpp- The main driver code of the project. This will display the main menu choosing between the databases and then
outputting the options with which the user can do

*******************************************************
# Circumstances of programs
*******************************************************

The program does run successfully.

The program was developed and tested on gnu g++ 6.1.x  It was
compiled, run, and tested on gcc csegrid server.


*******************************************************
# How to build and run the program
*******************************************************

 * Compilation

The project can be compiled by issuing the 'make' command on a linux terminal. Upon successful compilation,
an executable named 'hw3.exe' will be created on the current directory

* Running
unzip the file using the unix command or the right click of extract all

%unzip FinalProject

run the make command

Issue 'movie' on the command line 
