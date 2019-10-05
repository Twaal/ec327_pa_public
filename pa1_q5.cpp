#include <iostream>
#include <math.h>
using namespace std;
void opt1();
void opt2();
void opt3();
int prompt();

/******************************************************************************
*******                                                                 *******
*******  This program asks the user to enter a single letter            *******
*******	 after choosing one of three operations:                        *******
*******	 (1) change case; (2) reverse alphabet; (3) encrypt.            *******
*******                                                                 *******
******************************************************************************/

int main(void){
	prompt();
	return 0;
}
//////////////////////////////////////////////////////////////////////////////////
// prompt() asks the user for an option and executes the appropriate function ///
////////////////////////////////////////////////////////////////////////////////
int prompt(){
	int option;
	cout<<"Enter an option.\n(1) to switch case\n(2) to reverse alphabet\n(3) to encrypt\n";
	cin>>option;
	if (option == 1){
		opt1();
	} else if (option == 2){
		opt2();
	} else if (option == 3){
		opt3();
	} else {
		cout<<"ERROR: Invalin option\n";
		return 0;
	}
}
///////////////////////////////////////////////////////////////////////////////
// opt1() changes the case of the character. i.e. 'A' -> 'a' and 'g' -> 'G' //
/////////////////////////////////////////////////////////////////////////////
void opt1(){
	char myChar;
	cout<<"Enter a character to switch the case: ";
	cin>> myChar;
	if (myChar < 91 && myChar > 64){
		myChar = myChar + 32;
		cout<<myChar<<"\n";
	} else if (myChar < 123 && myChar > 96){
		myChar = myChar - 32;
		cout<<myChar<<"\n";
	} else {
		cout << "ERROR: not a valid character\n";
	}
}
//////////////////////////////////////////////////////////////////////////////////////////
// opt2() switches the case and reverses the character alphabetically. i.e. 'a' -> 'Z' //
////////////////////////////////////////////////////////////////////////////////////////
void opt2(){
	char myChar;
	cout<<"Enter a character to switch the case and reverse it alphabetically: ";
	cin>> myChar;
	if (myChar < 91 && myChar > 64){
		myChar = myChar + 32;
		int distFromA = myChar - 97;
		myChar = 122 - distFromA;
		cout<<myChar<<"\n";
	} else if (myChar < 123 && myChar > 96){
		myChar = myChar - 32;
		int distFromA = myChar - 65;
		myChar = 90 - distFromA;
		cout<<myChar<<"\n";

	} else {
		cout << "ERROR: not a valid character\n";
	}
}
//////////////////////////////////////////////////////////////////////////////////////
// opt3() uses a top sectret cyphering function to encrypt one character at a time //
////////////////////////////////////////////////////////////////////////////////////
void opt3(){
	char myChar;
	cout<<"Enter a character to encrypt it: ";
	cin>> myChar;
	if (myChar < 85 && myChar > 64){
		myChar = myChar + 6;
		cout<<myChar<<"\n";
	} else if (myChar < 117 && myChar > 96){
		myChar = myChar + 6;
		cout<<myChar<<"\n";
	} else if (myChar > 117 && myChar < 123){
		int rollOvr = myChar - 117;
		myChar = 65 + rollOvr;
		cout<<myChar<<"\n";
	} else if (myChar > 85 && myChar < 91){
		int rollOvr = myChar - 85;
		myChar = 97 + rollOvr;
		cout<<myChar<<"\n";
	} else {
		cout << "ERROR: not a valid character\n";
	}
}