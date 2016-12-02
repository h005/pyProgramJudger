#include <iostream>
using namespace std;
#include <cmath>

void fun(int n)
{
	for (int i = 2;i <= n;i++)
	{
		if (n%i == 0)
		{
			int k = 0;
			while(n%i == 0)
			{
				n = n/i;
				k++;
			}
			cout << i << "(" << k << ")";
		}
		if (n == 1)
			break;
	}
}

int main()
{
	int n;
	cin >> n;
	fun(n);
	return 0;
}