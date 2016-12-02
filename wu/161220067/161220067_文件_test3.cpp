#include <iostream>
#include <cmath>
using namespace std ;
bool help (int n);
void fun(int n)
{
	int temp = n;
	for (int i = 2; i <= n; i++)
		if (n%i == 0 )
		{	if (help(i))
			{
				int s = 0;
				while (temp%i == 0)
					{
						temp = temp / i;
						s++;
					}
				cout << i << "(" << s << ")";
			}
		}
}

int main ()
{
	int n ;
	//cout<<"ÇëÊäÈën£º";
	cin>>n;
	fun (n);
	return 0;
}
bool help(int n)
{
	for (int i = 2; i < n-1; i++)
		if (n%i == 0)
			return false;
	return true;
}
