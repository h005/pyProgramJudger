#include<iostream>
using namespace std;
void fun(int n);
int main()
{
	int n;
	cin>>n;
	fun(n);
	return 0;
}
void fun(int n)
{
	for(int i=2;i<=n;i++)
	{
		while (n%i==0)
		{
			int j=0;
			do{
				j++;
				n=n/i;
			  } while (n%i==0);
			cout<<i<<"("<<j<<")";
		}
	}
	cout<<endl;
}


