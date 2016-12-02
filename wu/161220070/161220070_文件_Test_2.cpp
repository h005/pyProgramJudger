#include<iostream>
using namespace std;
bool convert_letter(char ch);
int main()
{	
	char ch;
	cin>>ch;
	if(convert_letter(ch))
	{	
		cout<<"true"<<endl;
	}
	else
	{	
		cout<<"False"<<endl;
	}
	return 0;
}
bool convert_letter(char ch)
{	
	if(ch>='a'&&ch<='z')
	{	
		ch-=32;
		cout<<ch<<endl;
		return true;
	}
	else if(ch>='A'&&ch<='Z')
	{	
		ch+=32;
		cout<<ch<<endl;
		return true;
	}
	else
	{	
		return false;
	}
}