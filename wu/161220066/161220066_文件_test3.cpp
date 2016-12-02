#include<iostream>
using namespace std;
int a[15];
int b[15];
bool is_prime(int n)
{
	for(int i=2;i<=n-1;i++)
		if(n%i==0)
			return false;
	return true;
}
void fun(int n)
{
	int w=n;
	for(int i=2;i<n;i++)
	{
		if(is_prime(i))
		{
			int count=0;
			if(w%i==0)
			{
				cout<<i;
				while(w%i==0)
				{
					count++;
					w=w/i;
				}
				cout<<"("<<count<<")";
			}
		}
	}
	return;
}

int main()
{
	int n;
	cin>>n;
	fun(n);
	return 0;
}
