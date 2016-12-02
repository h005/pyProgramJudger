#include <iostream>
using namespace std;
void fun(int n)
{
	int n1 = 0, n2 = 0, n3 = 0, n4 = 0, n5 = 0, n6 = 0, n7 = 0;
	int a = n;
	while (a % 2 == 0)
	{
		n1++;
		a = a / 2;
	}
	if (n1 > 0)
		cout << "2(" << n1 << ")";
	while (a % 3 == 0)
	{
		n2++;
		a = a / 3;
	}
	if (n2 > 0)
		cout << "3(" << n2 << ")";
	while (a % 5 == 0)
	{
		n3++;
		a = a / 5;
	}
	if (n3 > 0)
		cout << "5(" << n3 << ")";

}
int main()
{
	int n;
	cout << "please enter n:";
	cin >> n;
	fun(n);
	return 0;
}