#include<iostream>
using namespace std;

bool convert_letter(char ch)
{
	if((ch<=91 && ch>=65) ||(ch>=97 && ch<=129))
	
		return true;
	else 
		return false;
}

int main()
{
	char c;
	cin>>c;
	if(convert_letter(c))
	{
		cout<<"true"<<endl;
		if(c>91)cout<<(char)(c-32);
		else	cout<<(char)(c+32);
	}
	else cout<<"false";
	system("pause");
	return 0;
}