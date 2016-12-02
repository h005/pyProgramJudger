#include<iostream>
using namespace std;
int find_unz(int n)
{
	if (n <= 3)
		return 0;
	else if (n > 3)
	{
		int i = 2;
		for (; i <= n; )
		{
			if (n%i == 0)
				break;
			i = i + 1;
		}
		if (i != n)
			return 1;
		else 
			return 0;
	}
	
}
void fun(int n)
{
	int  j;
	j = find_unz(n);
	if (j==1)
	{
		for (int i = 2; i < n; i++)
		{
			int count = 0;
			for (int j=n; j%i == 0;)
			{
				j = j / i;
				count =count + 1;
			}
			if (find_unz(i) == 1||count==0)
				;
			else if (find_unz(i)==0)
				cout << i << "(" << count << ")";
		}
	}

}
int main()
{
	int n;
	cin >> n;
	fun(n);
	return 0;
}