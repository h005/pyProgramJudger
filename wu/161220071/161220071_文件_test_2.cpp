#include <iostream>
using namespace std;
bool convert_letter(char ch)
{
	if (ch >='a' && ch <= 'z')
	{
		ch = ch+ 32;
		cout << ch;
		return true;
	}
	else if (ch >= 'A' && ch <= 'Z')
	{
		ch = ch-32;
		cout << ch;
		return true;
	}
	else
		return false;


}
int main()
{
	char m;
	cout << "please enter the char:";
	cin >> m;
	if (convert_letter(m))
		cout << "true";
	else
		cout << "flase";
	return 0;
}