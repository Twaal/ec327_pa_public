#include <iostream>
#include <math.h>
using namespace std;
bool intsctChk(float,float,float,float,float,float);
/****************************************************************************************
*******                                                                           *******
*******       This program takes the x and y coordinates and area of 2 squares,   *******
*******			then checks if the 2 squares overlap or not.                      *******
*******                                                                           *******
****************************************************************************************/
int main(){
	bool isOverlapping;
	float x1,x2,y1,y2,a1,a2;
	cout << "Enter the details for the first square below\n";
	cout << "X position upper left corner: ";
	cin >> x1;
	cout << "Y position upper left corner: ";
	cin >> y1;
	cout<<"Area: ";
	cin >> a1;
	"Enter the details for the second square below\n";
	cout << "X position upper left corner: ";
	cin >> x2;
	cout << "Y position upper left corner: ";
	cin >> y2;
	cout<<"Area: ";
	cin >> a2;

	isOverlapping = intsctChk(x1,y1,a1,x2,y2,a2);
	if (isOverlapping){
		cout<<"These squares overlap.";
		return 0;
	} else {
		cout<<"These squares do not overlap.";
		return 0;
	}

}

bool intsctChk(float x1, float y1, float a1, float x2, float y2, float a2){
	float xLen1 = sqrt(a1);
	//check if the distance is greater than the lengths
	if (abs(x2-x1) > xLen1 && abs(y2-y1) > xLen1){
		//if the distance is greater in both directions, then the squares do not overlap
		return false;
	} else {return true;}
}