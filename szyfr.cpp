#include <iostream>
#include <string>

using namespace std;

int main() 
{
	string input_text;
	string output_text = "";
	
	getline( cin, input_text );
	
	for (int i = 0; i < input_text.size(); ++i)
	{
		//output_text += (i%2) ? input_text[i] ^ 0x0F : input_text[i] ^ 0x0A;
		output_text += (input_text[i] < 'f') ? input_text[i]+2 : input_text[i]+4;
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
	cout << output_text << endl;
	
    return 0;
}