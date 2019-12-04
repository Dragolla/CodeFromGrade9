#include "pch.h" 
#include <iostream>
#include <vector>
#include <string>
// ADD A LOCATION FINDER FOR A NUMBER SOON
using namespace std;
char get_selection();

void print_intro();//this displays the menu 

void handle_display(const vector <int> &x);// this displays the list of numbers *Done*
void add_number(vector <int> &x);// *done*
void handle_mean(const vector <int> &x);//done
void handle_smallest(const vector <int> &x);// done
void handle_find(const vector <int> &x);//done
void handle_largest(const vector <int> &x);//done
void handle_unknown();//done 
void handle_add(vector<int> &x);//done
void handle_location(const vector<int> &x);//see line 200
void quit(char x);//done
void display_numbers(const vector <int> &x); // done
int get_smallest(const vector <int> &x);//done 
int get_largest(const vector <int> &x);//done
bool find(const vector <int> &x, int target);//done
double calculate_mean(const vector<int> &x);//done
int get_location(const vector<int> &x, int num);//see line 200
int main() {

	vector<int> numbers{};
	char selection{};
	do {
		print_intro();
		selection = get_selection();
		switch (selection) {
		case 'P':
			handle_display(numbers);
			break;

		case 'A':
			handle_add(numbers);
			break;
		case 'M':
			handle_mean(numbers);
			break;
		case 'S':
			handle_smallest(numbers);
			break;
		case 'L':
			handle_largest(numbers);
			break;
		case'F':
			handle_find(numbers);
			break;
		case 'Q':
			quit(selection);
			break;
		default:
			handle_unknown();
		}

	} while (selection != 'Q');

}
//void handle_location(const vector <int> &x) {// see line 200
//
//
//}
void handle_unknown() {
	cout << "Unknown selection - please try again" << endl;
}
void print_intro() {

	// -comments indicate which functions control which
	cout << "\nP - Print numbers" << endl;//handle_display
	cout << "A - Add a number" << endl;//add_number
	cout << "M - Display mean of the numbers" << endl;//handle_mean
	cout << "S - Display the smallest number" << endl;//handle smallest
	cout << "L - Display the largest number" << endl;//handle largest 
	cout << "F - Find a number" << endl;
	//cout << "G - get the location of a number" << endl;
	cout << "Q - Quit" << endl;
	cout << "\nEnter your choice: ";

}
void quit(char x) { // this is the more complex way
	if (x == 'Q')
		cout << "Goodbye!" << endl;
	//cout<< "Goodbye!<<endl; is the only thing needed, no arguements needed either.
}
void handle_find(const vector <int> &x, int number) {
	int find_number{};
	cout << "Enter the number to find: ";
	cin >> find_number;
	if (find(x, find_number == true))
		cout << "The number was found!" << endl;
	else
		cout << "The number entered was not found" << endl;
}
void handle_largest(const vector <int> &x)
{
	if (x.size() == 0)
		cout << "Sorry, there are no numbers on the list right now" << endl;
	else
	{
		int largest_number = get_largest(x);
		cout << "The smallest number is " << largest_number << endl;
	}
}
void handle_smallest(const vector <int> &x) {
	if (x.size() == 0) {
		cout << "Sorry, there are no numbers on the list right now - please add a number to the list" << endl;
	}
	else {
		int smallest_number = get_smallest(x);

		cout << "The smallest number is " << smallest_number << endl;
	}
}
void handle_mean(const vector <int> &x) {
	cout << "calculating mean of numbers: " << endl;
	cout << calculate_mean(x);
}
void handle_add(vector<int> &x) {
	int num_to_add{};
	cout << "Enter number to add: " << endl;
	cin >> num_to_add;
	x.push_back(num_to_add);
	cout << num_to_add << " added!" << endl;

}

char get_selection() {
	char selection{};
	cin >> selection;
	return toupper(selection);
}
//handle the display of the numbers
void handle_display(const vector<int> &x) {
	if (x.size() == 0)
		cout << "There are no numbers on the list right now" << endl;
	else {
		cout << "Printing numbers:" << endl;
		display_numbers(x);
	}

	//display all the numbers after using the display_numbers function
}



void display_numbers(const vector<int> &x) {

	for (auto s : x) {
		cout << "[ ";
		cout << s << " ";
		cout << " ]";
	}

}

double calculate_mean(const vector <int> &x) {
	int total{};
	double mean{};
	if (x.size() == 0)
		cout << "Sorry, unable to calculate data: list is empty, please add a number" << endl;
	else {


		for (auto n : x)
			total += n;
		mean = static_cast<double>(total) / x.size();
	}
	return mean;
}

int get_smallest(const vector <int> &x) {
	int smallest = x.at(0);
	for (auto s : x) {
		if (s < smallest)
			smallest = s;
	}
	return smallest;
}
int get_largest(const vector <int> &x) {
	int largest = x.at(0);
	for (auto scan : x) {
		if (scan > largest)
			largest = scan;
	}
	return largest;
}

bool find(const vector <int> &x, int number) {
	int target{};
	for (auto num : x) {
		if (num == target)
			return true;
	}
	return false;
}

//int get_location(const vector<int> &x, int &num) {//later to use as a pointer. Add when learned about pointers and iterator keyword
//	int number{};
//	
//	
//	//it = find(x.begin(),x.end(), num);
//
//
//
//
//}


   