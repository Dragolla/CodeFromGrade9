// strings.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <iomanip>
#include <string>   // important!

using namespace std;    // or use std:: 

int main() {

	string s0;
	string s1{ "Apple" };
	string s2{ "Banana" };
	string s3{ "Kiwi" };
	string s4{ "apple" };
	string s5{ s1 };         // Apple
	string s6{ s1, 0, 3 };   // App
	string s7(10, 'X');    // XXXXXXXXXX

	cout << s0 << endl;                  // No garbage
	cout << s0.length() << endl;     // empty string


	 //Assignment 
    //cout << "\nAssignment" << "\n------------------------------------------" << endl;

    //s1 = "Watermelon";
    //cout << "s1 is now: " << s1 << endl;    // Watermelon
    //s2 = s1;
    //cout << "s2 is now: " << s2 << endl;    // Watermelon

    //s3 = "Frank";
    //cout << "s3 is now: " << s3 << endl;    // Frank

    //s3[0] = 'C';    // Crank
    //cout << "s3 change first letter to 'C': "  << s3 << endl;   //Crank
    //s3.at(0) = 'P';
    //cout << "s3 change first letter to 'P': "  << s3 << endl;   // Prank

//// Concatenation
//
//    s3 = "Watermelon";
//    cout << "\nConcatenation" << "\n------------------------------------------" << endl;
//
//    s3 =  s5 + " and " + s2 + " juice";     // Apple and Banana juice
//    cout << "s3 is now: " << s3 << endl;    // Apple and Banana Juice
//
//   //s3 = "nice " + " cold " + s5 + "juice";         // Compiler error

  ////for loop
//    cout << "\nLooping" << "\n------------------------------------------" << endl;
//    
//    s1 = "Apple";
//    for (size_t i {0}; i < s1.length(); ++i) 
//        cout << s1.at(i);      //  or s1[i]    Apple
//    cout << endl;
//    
//// Range-based for loop
//    for (char  c: s1)
//        cout << c;     // Apple 
//    cout << endl;
	

//// Substring
//    cout << "\nSubstring" << "\n------------------------------------------" << endl;
//    s1 = "This is a test";
//
//    cout << s1.substr(0,4) << endl;	    // This
//    cout << s1.substr(5,2) << endl;	    // is  
//    cout << s1.substr(10,4) << endl;   	// test


//// Erase
//    cout << "\nErase" << "\n------------------------------------------" << endl;
//  
//    s1 = "This is a test";     
//    s1.erase(0,5);     // Erase This from s1 results in "is a test"
//    cout << "s1 is now: " << s1<< endl;     // is a test

 ////getline
     /*cout << "\ngetline" << "\n------------------------------------------" << endl;

    string full_name {};
    
    cout << "Enter your full name: ";
    getline(cin, full_name);
    
    cout << "Your full name is: " << full_name << endl;*/

//// Find
    cout << "\nfind" << "\n------------------------------------------" << endl;

    s1 = "The secret word is Boo";
    string word {};
    
    cout << "Enter the word to find: ";
    cin >> word;
    
    size_t position = s1.find(word);
    if (position != string::npos)
        cout << "Found " << word << " at position: " << position << endl;
    else
        cout << "Sorry, " << word <<  " not found" << endl;












}