#include<iostream>
using namespace std;
bool convert_letter(char ch)
{
	int a = ch;
	 if (a >= 97 && a <= 122)
	{
		ch-=32;
		cout << "true" << endl<< ch ;
		return true;
	}	
	else if (a >= 65 && a <= 90)
	{
		ch+= 32;
		cout << "true"<< endl<< ch  ;
		return true;
	}
	else
		cout << "false" << endl;
		return false;
}

int main()
{
	char ch;
	cin >> ch;
	convert_letter(ch);
	return 0;
}
