
#include "pch.h"
#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<vector<int>> movie
	{
	{1,2,3,4 },
	{1,2,3,4 },
	{1,2,3,4 }
	};
	cout << movie.at(0).at(0) << endl;
	cout << movie.at(0).at(1) << endl;

	cout << movie.at(0).at(2) << endl;

	cout << movie.at(0).at(3) << endl;
	vector<int> vector1;
	vector<int> vector2;
	vector1.push_back(10);
	vector1.push_back(20);
	cout << vector1.at(0) << endl;
	cout << vector1.at(1) << endl;
	cout << "size of this vector is: " << vector1.size() << endl;
	vector2.push_back(100);
	vector2.push_back(200);
	cout << vector2.at(0)<< endl;
	cout << vector2.at(1)<<endl;
	cout << "size of this vector is: " << vector2.size() << endl;


	vector < vector<int>> two;
	two.push_back(vector1); // increment vector1 as the value of integer two
	two.push_back(vector2);

	cout << "using a 2d vector: " << two.at(0).at(0) << " " << two.at(0).at(1) << endl;
	cout << two.at(1).at(0) << " " << two.at(1).at(1) << endl;
	vector1.at(0) = 1000;
	cout << two.at(0).at(0) << " " << two.at(0).at(1) << endl;
	cout << two.at(1).at(0) << " " << two.at(1).at(1) << endl;
	vector1.at(0) = 1000;

	return 0;

}