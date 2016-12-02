#include<iostream>
using namespace std;
bool convert_letter(char);
int main()
{	char ch;
	cout << "ÇëÊäÈëÒ»¸ö×Ö·û" << endl;
	cin >> ch;
	if (convert_letter(ch)==1)
		cout << "true" << endl;
	else
		cout << "false";
	if (ch>=65 && ch<=90)
		cout << (char)(ch+32);
	else if	(ch>=97 && ch<=122)
		cout << (char)(ch-32);
	return 0;
}
bool convert_letter(char ch)
{	if (ch>=65 && ch<=90)
		return true;
	else if (ch>=97 && ch<=122)
		return true;
	else
		return false;
}