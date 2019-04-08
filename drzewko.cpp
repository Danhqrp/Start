#include<iostream>
#include<string>
using namespace std;
 
int main()
{
	int height;
	int width,s,f=1,d= 10;
	char x='X';

		cout << "Witaj, narysuje Ci drzewko!" << endl;
		cout << "Podaj wysokosc: " << endl;
		
		cin >> height;
		
		cout << "Podaj szerokosc: " << endl;
	
		cin >> width;
	int z=width, b=0;
	
			for(int i=0; i<=height; i++) //wysokosc
			{
				for(int p=0; p<=width; p++ ) //szerokosc 
				{
					for ( s=1; s<=width/2;s++) //Rysuje spacje
					{
						int t=width/2;
						
						cout << "o";
						
						
					for( b; b<f; b++){
						
								cout<< "x";
							f=f+2;
						}
							
					}
					cout <<endl;
					width-=2;
					
					
				
				
				
				}
	
	
	
	
			}
	
		
	
	
return 0;
}