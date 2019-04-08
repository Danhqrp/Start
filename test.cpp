#include<iostream>
#include<string>
using namespace std;
 
int main(){
int width = 11;
	for (int i=0; i<=10; i++){
	for (int s=1; s<=width/2;s++) //Rysuje spacje
					{
						cout << "s";
						
					}
		width-=2; cout <<endl;
	}
return 0;
}