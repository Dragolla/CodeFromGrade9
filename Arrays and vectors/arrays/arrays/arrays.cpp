
#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	char vowels[]{ 'a', 'e', 'i', 'o', 'u' };
	cout << "\n the first vowel is: " << vowels[0] << endl;
	cout << "the last vowel is :" << vowels[4] << endl;

	double hi_temps[]{ 90.1, 89.8, 77.5, 81.6 };
	cout << "\n the first high temperature is: " << hi_temps[0] << endl;
	hi_temps[0] = 100.7;

	cout << "the first high temperature is now :" << hi_temps[0] << endl;
	int test_scores[]{ 100, 90, 80, 70, 60 };
	cout << test_scores[0]<<endl;
	cout << test_scores[1] << endl;
	cout << test_scores[2] << endl;
	cout << test_scores[3] << endl;
	cout << test_scores[4] << endl;
	cout << "enter your test scores: " << endl;
	cin >> test_scores[0];
	cin >> test_scores[1];
	cin >> test_scores[2];
	cin >> test_scores[3];
	cin >> test_scores[4];
	cout << "updated scores are now: " << endl;
	cout << test_scores[0] << endl;
	cout << test_scores[1] << endl;
	cout << test_scores[2] << endl;
	cout << test_scores[3] << endl;
	cout << test_scores[4] << endl;
}

