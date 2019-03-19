//============================================================================
// Name        : cal.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

void dodawanie()
{
	int a, b;
	cout << endl << "Podaj 1 liczbe: ";
	cin >> a;

	cout << "Podaj 2 liczbe: ";
	cin >> b;
	cout << a <<"+"<< b<< "="<< a+b <<endl ;
}

void odejmowanie()
{
	int a, b;
	cout << endl << "Podaj 1 liczbe: ";
	cin >> a;

	cout << "Podaj 2 liczbe: ";
	cin >> b;
	cout << a <<"-"<< b<< "="<< a-b <<endl ;
}

void mnozenie()
{
	int a, b;
	cout << endl << "Podaj 1 liczbe: ";
	cin >> a;

	cout << "Podaj 2 liczbe: ";
	cin >> b;
	cout << a <<"*"<< b<< "="<< a*b <<endl ;
}

void dzielenie()
{
	char a, b;
	cout << endl << "Podaj 1 liczbe: ";
	cin >> a;

	cout << "Podaj 2 liczbe: ";
	cin >> b;
	if(b==0){

		cout<<"nie mozna dzielic przez 0!";
	}else


		cout << a <<"/"<<b<< "="<< a/b <<endl ;
}

int main() {

	bool flaga=true;
	while(flaga){
		int a, b, c, wybor, wynik;


		//MENU
		cout <<"Za pomoca numerow 1-4 wybierz jakie chcesz zrobic dzialanie:"<< endl;
		cout << "1. Dodawanie"  << endl;
		cout << "2. Odejmowanie"<< endl;
		cout << "3. Mnozenie"   << endl;
		cout << "4. Dzielenie"  << endl;

		//WYBOR
		cout << "Wybierz liczbe: ";
		cin >> wybor;


		//DZIALANIA
		switch(wybor){
		case 1:
			dodawanie();
			break;

		case 2:
			odejmowanie();
			break;

		case 3:
			mnozenie();
			break;

		case 4:
			dzielenie();
			break;

		default :
			cout << "Nie ma takiej opcji" <<endl;
			break;
		}
	}
	return 0;
}
