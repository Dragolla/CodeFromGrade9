
#include "pch.h"
#include <cmath>
#include <iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main()
{
	//double num{};

	//cout << "Enter a number (double) : ";
	//cin >> num;

	//cout << "The sqrt of " << num << " is: " << sqrt(num) << endl;
	//cout << "The cubed root of " << num << " is: " << cbrt(num) << endl;

	//cout << "The sine of " << num << " is: " << sin(num) << endl;
	//cout << "The cosine of " << num << " is: " << cos(num) << endl;

	//cout << "The ceil of " << num << " is: " << ceil(num) << endl;
	//cout << "The floor of " << num << " is: " << floor(num) << endl;
	//cout << "The round of " << num << " is: " << round(num) << endl;


	//double power{};
	//cout << "\nEnter a power to raise " << num << " to: ";6
	//cin >> power;
	//cout << num << " raised to the " << power << " power is: " << pow(num, power) << endl;
	





	int random_number{};
	size_t count{ 10 };           // number of random numbers to generate
	int min{ 1 };                  // lower bound (inclusive) 
	int max{ 6 };                 // upper bound (inclusive)

	// seed the random number generator
	// If you don't seed the generator you will get the same requence random numbers every run

	cout << "RAND_MAX on my system is: " << RAND_MAX << endl;
	srand(time(nullptr));

	for (size_t i{ 1 }; i <= count; ++i) {
		random_number = rand() % max + min;     // generate a random number [min, max]
		cout << random_number << endl;
	}

}


