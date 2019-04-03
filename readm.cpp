#include <iostream>
#include <string>

using namespace std;

string slowo, out1, eout1, wyj, out2, eout2,wyj1;
string output_text = "";


void szyfr1(){

for(int i=0; i<slowo.size();i++){
	if (i%2){
			
		out1 += slowo[i];
		
	}
	else
	{
		out2 += slowo[i];
			
	}

} 
}

void szyfr2()
{	
			for (int i = 0; i < slowo.size(); ++i)
			{
		output_text += (i%2) ? slowo[i] ^ 0x0F : slowo[i] ^ 0x0A;
		//	output_text += (input_text[i] < 'f') ? input_text[i]+2 : input_text[i]+4;
		/*
		if (i%2)
		{
			output_text += input_text[i] ^ 0x0F
		}
		else
		{
			output_text += input_text[i] ^ 0x0A
		}
		*/
			}





}
void szyfr3(){

			
			
			
	
			
	
			for (int i = 0; i < wyj.size(); ++i)
			{
		output_text += (i%2) ? wyj[i] ^ 0x0F : wyj[i] ^ 0x0A;
		//	output_text += (input_text[i] < 'f') ? input_text[i]+2 : input_text[i]+4;
		/*
		if (i%2)
		{
			output_text += input_text[i] ^ 0x0F
		}
		else
		{
			output_text += input_text[i] ^ 0x0A
		}
		*/
			}





}
void odkod(){

	int s1 = 0, s2 = 0;
	for(int i=0; i<wyj.size();i++)
	{
		if (i%2)
		{
		 	eout1+= out1[s1++];
		}
		else
		{
			eout1 += out2[s2++];
		}

} 


}



int main(){
	
	int wybor;
	
	cout << "Chcesz slowo (1)zakodowac czy (2)odkodowac?";
	cin >> wybor;

	switch(wybor){

	case 1:
		cout << "Podaj slowo: ";
		getline( cin.ignore(), slowo );
		
		szyfr1();
		wyj = out2 + out1 ;
		cout <<"Pierwszy etap szyfrowania: " << wyj << endl;
	
		
		szyfr3();
		cout <<"Drugi etap szyfrowania: " << output_text << endl;
		
	
		
		break;

	case 2:
		cout << "Podaj slowo: ";
		getline( cin.ignore(), wyj);
		
		

		szyfr3();
		cout <<" odszyfrowania: " << output_text << endl;
		odkod();


		out1.insert(0, output_text, 0,3);
		out2.insert(0, output_text, 3,6);
		cout << out1 <<endl;
		cout << out2;		

		odkod();


		
		cout <<" odszyfrowania: " << eout1 << endl;
		
		break;

	default:
		cout << "Nie ma takiej opcji";
		break;
	




}
	
	
	
	


	
	
	
	
	


;

	return 0;
}
