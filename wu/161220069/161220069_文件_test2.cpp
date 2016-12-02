#include<iostream>
using namespace std;
bool convert_letter(char ch);
int main()
{
	int i=0;
    char ch;
	ch=getchar();
	i=convert_letter(ch);
	if (i==0)
	{
		cout<<"false"<<endl;
		return 0;
	}
	else 
	{
		cout<<"true"<<endl;
		if( ch>='a'&&ch<='z')
			ch=ch+'A'-'a';
		else 
			ch=ch+'a'-'A';
		cout<<ch;
	}
	return 0;
}
bool convert_letter(char ch)
{
	if(( ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z'))
		return true;
	else 
		return false;
}
