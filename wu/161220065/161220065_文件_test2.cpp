#include<iostream>
using namespace std;
bool convert_letter(char ch)
{
	if ((ch >= 'a'&&ch <= 'z')||( ch >= 'A'&&ch <= 'Z'))
		return true;
	else return false;
}
int main()
{
	char ch;
	cin >> ch;
	if (convert_letter(ch))
	{
		cout << "true" << ",";
		if (ch >= 'a'&&ch <= 'z')
		{
			ch = toupper(ch);
			cout << ch << endl;
		}
		else
		{
			ch = tolower(ch);
			cout << ch << endl;
		}
	}
	else cout << "false" << endl;
	return 0;
}