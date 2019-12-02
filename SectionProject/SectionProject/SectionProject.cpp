
#include "pch.h"
#include <iostream>
#include <string>
using namespace std;
int main()
{
	string alphabet("abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ");
	string key("QWERTYUIOPASDFGHJKLZXCVBNMqwertyuiopasdfghjklzxcvbnm");
	string encrypted;
	string message;
	//ask the user to enter the secret message
	cout << "What is the secret message that you have recieved?" << endl;
	//getline method
	getline(cin, message);
	//use the for loop for(char c : encrypted) to scan through all the elements
	for (char x : message) {
		size_t position = alphabet.find(x);
		if (position != string::npos) {
			char new_char{ key.at(position) };
			encrypted += new_char;
		}
		else {
			encrypted += x;
		}
	}
	cout << "You secret message is: " << encrypted << endl;

	string decrypted{};
	string mess;
	cout << "Enter encrypted message: " << endl;
	getline(cin, mess);
	for (char c : mess) {
		size_t position = key.find(c);
		if (position != string::npos) {
			char new_char{ alphabet.at(position) };
			decrypted += new_char;

		}
		else {
			decrypted += c;
		}

	}
	cout << "Your message is: " << decrypted << endl;
}
