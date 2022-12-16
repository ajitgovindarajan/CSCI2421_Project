*******************************************************
*  Name      : 
*  Student ID:  107861904
*  Email     :  ajit.govindarajan@ucdenver.edu
*  Class     :  CSCl 2421 Section 001
*  HW#       :  Final Project
*  Due Date  :  Dec. 16, 2022
*******************************************************


                 Read Me


*******************************************************
# Description of the program
*******************************************************
1. This program will practice the implementation of several functions of 3 important structures:
Binary Search Trees, HashTables, and Maps.
2. First the Driver program will intake some data for the program to run the binary search tree functions
The binary search class will then run through the functions of _findMax and _findMin to find the minimum
and maximum  values of the data as well as length of the tree. 
3. The Binary Search tree class will also print the inorder traversal, post-order traversal, and pre-order
traversal of the trees to show the organization of the trees
4. Then in the HashTable class, the class will use the generic insert and lookup function to implement
a new insert function.
5. The main driver code will intake a file name from the user and print out the definitions of some defined
words that the user has in the file by accounting for the colon(:) as the delimiter
6. The driver program will specifically show the text in the file before and after the implemented remove function
as acted. The contents of the text file are sent through the map.h file which takes the functions from the
HashTable.h file and implement them
7. Once the object and key are removed, the reha sh function will realign the hashmap providing a new table and a 
hash value
8. Then the final output will be the summary of the binary search trees inputted in the driver code as well as the 
generic map from the dictionary file provided


*******************************************************
# Source files
*******************************************************

* BST.h - The file contains the BST class which includes all the implemented methods of the binary
search trees. The main functions include _findMin, _findMax, _printTreeInorder, _ printTreePostOrder,
_printTreePreOrder, and _height.
* Exceptions.h - This file makes sure the exceptions are highlighted for the possible error handling.This file
mainly handles the potential errors that can come and make sure the code doesn't crash
* actorActress.h - This file will instaitate the object of the actors and actresses along with the criteria provided
in the csv file of the actor and actress data base
* Movies.h - This file will instaitate the object of the movies/ pictures along with the criteria provided
in the csv file of the movie information 
* fileinputoutput.h - This file will handle all the file handling of the csv files of the file data bases. This will 
opening of the original csv files as well as the export of the finsihed records into a file of the users' choosing
* functions.h- this file contains all of the functions that are needed to fulfill all of the requirements in this 
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

at the file input type "dictionary.txt"
