#include <iostream>
#include <math.h>
using namespace std;
int isPal(int, int);
int numCount(int);
void prompt();

/****************************************************************************************
*******                                                                           *******
*******       This program takes a string of integers and finds out if the        *******
*******		  string of integers is a palindrome.                                 *******
*******		  i.e. '10101' and '23432' are palindromes, and '123231' is not.      *******
*******                                                                           *******
****************************************************************************************/

int main(void){
	prompt();
	return 0;
}
////////////////////////////////////////////////////////////////////////////////
// numCount() returns the length of the string of numbers entered by the user //
////////////////////////////////////////////////////////////////////////////////
int numCount(int num){
	int counter = 0;
	while (num != 0){
		num = num/10;
		counter++;
	}
	return counter;
}
//////////////////////////////////////////////////////////////////////////////
// isPal() returns integer value 1 if the string of numbers is a palindrome //
//  and returns 0 if it is not a palindrome.                                //
//////////////////////////////////////////////////////////////////////////////
int isPal(int num, int length){
	int left,right,index1,index2,i,j;
	bool isEq;
	i = 0;
	j = 1;
	while(i<length/2){
		index1 = pow(10,i);
		index2 = pow(10,((length) - j));
		//cout << "index1 is "<<index1;
		//cout << "index2 is "<<index2;
		left = (num / index2) % 10;
		right = (num / index1) % 10;
		//cout << "left is "<<left;
		//cout << "right is "<<right;
		i++;
		j++;
		if (right == left){
			isEq = 1;
		} else if(right != left) {
			isEq = 0;
		}
	}
	return isEq;
}
///////////////////////////////////////////////////////////////////
// prompt() prompts the user for a string of numbers             //
// and lets the user know if the string is or isn't a palindrome //
///////////////////////////////////////////////////////////////////
void prompt(){
	int num;
	cout << "Enter a sequence of numbers:";
	cin >> num;
	
	int length = numCount(num);
	int isPalin = isPal(num,length);
	if (isPalin == 1){
		cout << "This is a palindrome.\n";
	} else if(isPalin == 0){
		cout << "This is not a palindrome.\n";
	}
	//cout <<"The length is "<< length <<endl;
}