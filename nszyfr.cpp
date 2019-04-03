#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>

using namespace std;





string szyfrowanie(string slowo)
{
	string out1, out2, output_text;
	for(int i=0; i<slowo.size();i++){
	if (i%2){
			
		out1 += slowo[i];
		
	}
	else
	{
		out2 += slowo[i];
			
	}

} 

	slowo = out2 + out1;
	
	for (int i = 0; i < slowo.size(); ++i)
			{
		output_text += (i%2) ? slowo[i] ^ 0x0F : slowo[i] ^ 0x0A;
			}
	

	
	return output_text;
}

//--------------------------------------------------------------------------------//


string deszyfrowanie(string slowo)
{	
	int n=0, a=0,b=0;
	string output_text, out1, out2;
		for (int i = 0; i < slowo.size(); ++i)
			{
		output_text += (i%2) ? slowo[i] ^ 0x0F : slowo[i] ^ 0x0A;
			}
	
	slowo = output_text;
	
	if(slowo.size()%2==1){
		n=1;
	}
	
	for (int i=0; i<slowo.size()/2+n;i++)
	{
		
		out1 += slowo[i];
	}
		
	for (int i=slowo.size()/2+n; i<slowo.size();i++)
	{
		
		out2 += slowo[i];
	}
	output_text ="";
	for(int i=0; i<slowo.size();++i){
		if (i%2){
			
		output_text += out2[a++];
		
	}
	else
	{
		output_text += out1[b++];
			
	}
	
	}
	
	 
	
	return output_text;
}


int main(){
	
	int wybor, w=5;
	string slowo="", wynik, linia, napis,t="text.txt";
	fstream plik;
	
//WYBOR
	cout << "Chcesz slowo (1)zakodowac czy (2)odkodowac?";
	cin >> wybor;
	
	
	switch(wybor){

	case 1:
// SLOWO DO ZASZYFROWANIA
		getline(cin.ignore(), slowo);
		wynik=szyfrowanie(slowo);
		
		 plik.open( t, ios::out );
		 plik<<wynik;
		 plik.close();
			
			
		cout << wynik <<endl;
		break;

	case 2:
//SLOWO DO ODSZYFROWANIA
			
	
			
		
    plik.open("text.txt", ios::in);
    if(plik.good()==false) cout<<"Nie mozna otworzyc pliku!";
	 
	while(!plik.eof()){	
			
        getline(plik, linia); //pobierz linijkę
        slowo+=linia;
	}
      plik.close();
	
		wynik=deszyfrowanie(slowo);	
		cout << wynik <<endl;
			

					
		break;

	default:
		cout << "Nie ma takiej opcji";
		break;
	




}
;

	return 0;
}