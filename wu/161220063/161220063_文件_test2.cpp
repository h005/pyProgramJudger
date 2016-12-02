#include<iostream>
using namespace std;
bool convert_letter(char ch)
{	if( ch>='A'&& ch<='z')			return true;
	else return false;
}

int main()
{	char ch;
	cin>>ch;
	if( convert_letter(ch) )
	{	cout<<"true"<<endl;
	if(ch>='a'&&ch<='z')	ch=ch-('a'-'A');
		else if(ch>='A'&&ch<='Z')	ch=ch+('a'-'A') ;
		cout<<ch<<endl;
	}
	else cout<<"false"<<endl;
	return 0;
}