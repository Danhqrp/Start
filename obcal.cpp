//============================================================================
// Name        : cal.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

void addition()
{
	int a, b;
	cout << endl << "Enter the first number: ";
	cin >> a;

	cout << "Enter the secound number: ";
	cin >> b;
	cout << a <<"+"<< b<< "="<< a+b <<endl ;
}

void subtraction()
{
	int a, b;
	cout << endl << "Enter the first number: ";
	cin >> a;

	cout << "Enter the secound number: ";
	cin >> b;
	cout << a <<"-"<< b<< "="<< a-b <<endl ;
}

void multiplication()
{
	int a, b;
	cout << endl << "Enter the first number: ";
	cin >> a;

	cout << "Enter the secound number: ";
	cin >> b;
	cout << a <<"*"<< b<< "="<< a*b <<endl ;
}

void division()
{
	double a, b,c;
	cout << endl << "Enter the first number: ";
	cin >> a;

	cout << "Enter the secound number: ";
	cin >> b;
	if(b==0){

		cout<<"You can't divide by 0!!";
	}else
		
		c=a/b;

		cout<< a <<"/"<<b<< "="<< c <<endl;

}

void expon(){

	int a, b, c=1;
	cout << endl << "Enter the first number: ";
	cin >> a;

	cout << "Enter the secound number: ";
	cin >> b;
	
	for(int i=0; i<b; i++){

		c = c*a;

	}
	cout << a<<"^"<<b<< "="<< c <<endl ;


}

int main() {

	
	while(true){
		int choose;
		

		//MENU
		cout <<"By this number 1-4 choose what I should to do:"<< endl;
		cout << "1. Addition"  << endl;
		cout << "2. Subtraction"<< endl;
		cout << "3. Multiplication"   << endl;
		cout << "4. Division"  << endl;
		cout << "5. Exponentiation"  << endl;


		//choose
		cout << "choose number: ";
		cin >> choose;


		//DZIALANIA
		switch(choose){
		case 1:
			addition();
			break;

		case 2:
			subtraction();
			break;

		case 3:
			multiplication();
			break;

		case 4:
			division();
			break;
		case 5:
			expon();
			break;

		default :
			cout << "Sorry! Bad number." <<endl;
			break;
		}
	}
	return 0;
}
