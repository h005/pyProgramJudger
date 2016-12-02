#include <iostream>
using namespace std;
#include <cmath>

bool convert_letter(char h)
{
	if (int(h) >= 65 && int(h) <= 90)
		return true;
	else if(int(h) >= 97 && int(h) <= 122)
		return true;
	else
		return false;
}

int main()
{
	char h;
	cin >> h;
	if (convert_letter(h))
	{
		cout << "true" << " ";
		if(int(h) >= 97 && int(h) <= 122)
			cout << char(int(h) - 32);
		else
			cout << char(int(h) + 32);
	}
	else
		cout << "false";
	return 0;
}