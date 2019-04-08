#include<iostream>
#include<string>
using namespace std;
 
int main()
{
string pierwsze;
string drugie;
string temp;

	
	cout << "Podaj pierwsze slowo" << endl;
	getline(cin, pierwsze);
	
	cout << "Podaj drugie slowo" << endl;
	getline(cin, drugie);
	
	int pierwsze_len = pierwsze.size();
	int drugie_len = drugie.size();
	int wyj;
	int len;
	
	
	//cout << pierwsze << " " << drugie << endl;
	if(pierwsze_len < drugie_len)
	{
		for(int i=0; i < pierwsze_len; i++)		// i to liczba znaków które ucinamy
		{
				
			for(int c=0; c<drugie_len; c++)		// c to przesunięcie 
			{
				if (c+pierwsze_len-i > pierwsze_len) break;
				else
				{
				
				temp = pierwsze.substr(c,(pierwsze_len-i));
				//cout << temp << endl;
				wyj = drugie.find(temp);
				
				if ( wyj != string::npos) break;
			
				}
				
				
			}
			
			if ( wyj != string::npos) 
			{
				len = pierwsze_len-i;
				break;

			}
			
		}
	cout << "debug" << endl;
	//temp = drugie.substr(wyj, wyj+len);
	cout << temp << endl;
	
	}
	
	
	
	
return 0;
}