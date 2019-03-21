//============================================================================
// Name        : cal.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class add{
public:

	int a, b;


void addition()
{
	
	cout << endl << "Enter the first number: ";
	cin >> a;

	cout << "Enter the secound number: ";
	cin >> b;
	cout << a <<"+"<< b<< "="<< a+b <<endl ;
}

};

class sub{
	public:
	int a, b;	


void subtraction()
{
	
	cout << endl << "Enter the first number: ";
	cin >> a;

	cout << "Enter the secound number: ";
	cin >> b;
	cout << a <<"-"<< b<< "="<< a-b <<endl ;
}
};


class mul{
	public:
	int a, b;

void multiplication()
{
	
	cout << endl << "Enter the first number: ";
	cin >> a;

	cout << "Enter the secound number: ";
	cin >> b;
	cout << a <<"*"<< b<< "="<< a*b <<endl ;
}

};

class sio{
	public:
	double a, b,c;
void division()
{
	
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

};

class exp{
	public:
	
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
};
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
			add z1;
			z1.addition();
			break;

		case 2:
			sub a2;
			a2.subtraction();
			break;

		case 3:
			mul a3;
			a3.multiplication();
			break;

		case 4:
			sio a4;
			a4.division();
			break;
		case 5:
			exp a5;
			a5.expon();
			break;

		default :
			cout << "Sorry! Bad number." <<endl;
			break;
		}
	}
	return 0;
}
