#include "pch.h"
#include <iostream>
using namespace std;
#include <vector>
int main()
{
	vector<int> vec{ 10, 20, 30, 40, 50 };
	vec.at(0) = 100;
    vec.at(4) = 1000;
	cout << vec.at(0)<<endl;
	cout << vec.at(1)<<endl;
	cout << vec.at(2) << endl;
	cout << vec.at(3)<<endl;
	cout << vec.at(4)<<endl;
	//vector <char> vowels;
	//vector <char> vowels(5);
	vector <char> vowels{ 'a', 'e', 'i', 'o', 'u' };
	cout << vowels[0] << endl;
	cout << vowels[4] << endl;


	vector <int> test_scores{ 100, 98, 89 };
	cout << test_scores[0] << endl;
	cout << test_scores[1] << endl;
	cout << test_scores[2] << endl;

	cout << test_scores.at(0) << endl;
	cout << test_scores.at(1) << endl;
	cout << test_scores.at(2) << endl;
	cout << "there are " << test_scores.size() << " scores in the vector" << endl;

	cout << "enter 3 test scores ";
	cin >> test_scores.at(0);
	cin >> test_scores.at(1);
	cin >> test_scores.at(2);
	cout << "updated test scores :" << endl;
	cout << test_scores.at(0)<<endl;
	cout << test_scores.at(1)<<endl;
	cout << test_scores.at(2)<<endl;
	cout << "\n Enter a test score to add to the vector: ";
	int add{ 0 };
	cin >> add;
	test_scores.push_back(add);
	cout << " enter one more: ";
	cin >> add;
	test_scores.push_back(add);
	cout << "test scores are now:" <<endl;
	cout << test_scores.at(0) << endl;
	cout << test_scores.at(1) << endl;
	cout << test_scores.at(2) << endl;
	cout << test_scores.at(3) << endl;
	cout << test_scores.at(4) << endl;
	cout << "\n there are now " << test_scores.size() << " scores in the vector" << endl;
	vector <vector <int>> movie
	{
		{1, 6, 3, 4},
		{1, 5, 3, 4},
		{1, 1, 3, 5}
	};
	cout << "\n here are the movie ratings for reviewer from 1-5 #1 usign array syntax: " << endl;
	cout << movie[0][0] << endl;
	cout << movie[0][1] << endl;
	cout << movie[0][2] << endl;
	cout << movie[0][3] << endl;
	cout << " here are the movie ratings for reviewer #1 using vector syntax: " << endl;
	cout << movie.at(0).at(0) << endl;
	cout << movie.at(0).at(1) << endl;
	cout << movie.at(0).at(2) << endl;
	cout << movie.at(0).at(3) << endl;
	cout << endl;
	return 0;
}