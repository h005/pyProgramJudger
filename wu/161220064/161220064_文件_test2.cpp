#include<iostream>
using namespace std;
bool convent_letter(char ch)
{
	if( ch>='A'&&ch<='Z')
	{
	    printf("%c\n",ch+32);
		return true;
	}
	if(ch >='a'&& ch<='z')
	{
		printf("%c\n",ch-32);
		return true;
	}
	else
		return false;
}
int main()
{
    char ch;
	cin >> ch;
	if( convent_letter(ch))
		cout << "true";
	else
		cout << "false";
	return 0;
}