#include<iostream>
using namespace std;

bool convert_letter(char ch)
{
	if( (ch <='z'&&ch>='a') || (ch<='Z'&& ch>='A'))
	{
		return true;
	}
	return false;
}

char con_char(char ch)
{
	if(ch <'z'&&ch>'a')
	{
		return ch -32;
	}
	else 
	{
		return ch+32;
	}
}
int main()
{
	char ch;
	cin>>ch;
	if(convert_letter(ch))
	{
		cout<<"����true,�����"<<con_char(ch)<<endl;
	}
	else
	{
		cout<<"����false"<<endl;
	}
	return 0;
}