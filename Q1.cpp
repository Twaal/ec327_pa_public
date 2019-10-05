#include <iostream>
#include <cmath>
#include <string>
using namespace std;
double let2num(string);
void check(double);
 int main(void){
	string c1,c2,c3,c4,c5;
	double g1,g2,g3,g4,g5,gpa;
	cout << "Enter the grade for each class, then hit enter!!!!!\n" << endl;
	cout << "Calass 1: " << endl;
	cin >>  c1;
	g1 = let2num(c1);
	check(g1);
	cout << "\nCalass 2: " << endl;
	cin >>  c2;
	g2 = let2num(c2);
	check(g2);
	cout << "\nCalass 3: " << endl;
	cin >>  c3;
	g3 = let2num(c3);
	check(g3);
	cout << "\nCalass 4: " << endl;
	cin >>  c4;
	g4 = let2num(c4);
	check(g4);
	cout << "\nCalass 5: " << endl;
	cin >>  c5;
	g5 = let2num(c5);
	check(g5);


	gpa = (g1+g2+g3+g4+g5)/5;
	cout << "GPA is "<< fixed << gpa << endl;
	return 0;
}

double let2num(string letter){
	if (letter == "A" || letter == "a")
		return 4.00;
	else if (letter == "A-" || letter == "a-")
		return 3.70;
	else if (letter == "B+" || letter == "b+")
		return 3.30;
	else if (letter == "B" || letter == "b")
		return 3.00;
	else if (letter == "B-" || letter == "b-")
		return 2.70;
	else if (letter == "C+" || letter == "c+")
		return 2.30;
	else if (letter == "C" || letter == "c")
		return 2.00;
	else if (letter == "C-" || letter == "c-")
		return 1.70;
	else if (letter == "D" || letter == "d")
		return 1.00;
	else if (letter == "F" || letter == "f")
		return 0.00;
	else
		return 100;
}
void check(double grade) {
	if (grade == 100) {
		cout << "This is an invalid input. Goodbye." << endl;
		exit(0);
	}
}
