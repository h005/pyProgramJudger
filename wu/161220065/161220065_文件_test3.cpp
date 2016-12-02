#include<iostream>
using namespace std;
void fun(int n)
{
	int a[1000];
	int b[1000];
	int j = 0;
	for (int i = 2; i*i <= n; i++)
	{
		int count = 0;
		while (n%i == 0)
		{
			n = n / i;
			count++;
		}
		if (count != 0)
		{
			a[j] = count;
			b[j] = i;
			j++;
		}
	}
	for (int k = 0; k < j; k++)
			cout << b[k] << "(" << a[k] << ")";
	cout << endl;
}
int main()
{
	int n;
	cin >> n;
	fun(n);
	return 0;
}