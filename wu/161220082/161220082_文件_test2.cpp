#include<iostream>
using namespace std;
bool convert_letter(char ch)
{
	if ((int)ch < 97 && (int)ch >= 65)
		return true;
	else if ((int)ch >= 97 && (int)ch < 123)
		return true;
	else
		return false;
}
int main()
{
	char ch;
	cin >> ch;
	bool j = convert_letter(ch);
	if (j)
	{
		if ((int)ch < 97 && (int)ch >= 65)
			ch = ch + 32;
		else if ((int)ch >= 97 && (int)ch < 123)
			ch = ch - 32;
		cout << "����true�������" << ch << endl;
	}
	else
		cout << "����false"<<endl;
	return 0;
}