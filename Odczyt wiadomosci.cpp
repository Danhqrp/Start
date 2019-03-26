#include <iostream>
using namespace std;

int main(){
	string login, haslo;
	int pin;	
	

	cout << "Podaj login: " << endl;
	cin >> login;

	cout << "Podaj haslo: " << endl;
	cin >> haslo;

	cout << "Podaj pin: " << endl;
	cin >> pin;
	
	if((login==admin)&&(haslo==root)&&(pin==1234)){

	cout << "Uzyskales dostep do pliku" <<endl;
	


	}else
	
	cout << "wpisales nie poprawne dane";






	return 0;
}
