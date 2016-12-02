#include<iostream>
using namespace std;
bool convert_letter(char ch)
{
	if(ch>='a'&&ch<='z')
	{
		ch=ch-32;
		cout<<"True"<<endl;
		cout<<ch;
		return true;
	}
	else if(ch>='A'&&ch<='Z')
	{
		ch=ch+32;
		cout<<"True"<<endl;
		cout<<ch;
		return true;
	}
	else
	{
		cout<<"False"<<endl;
		return false;
	}

}
int main()
{
	char ch;
	cin>>ch;
	convert_letter(ch);
	return 0;
}
