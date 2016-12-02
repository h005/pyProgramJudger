#include<iostream>
#include<cmath>
using namespace std;
void fun(int);
bool primer(int);
int main()
{	int n;
	cin>>n;
	fun(n);
	return 0;
}
void fun(int n)
{	
	for(int i=2;i<=n;i++)
	{	
		if(primer(i))
		{	
			int j=0;
			while(true)
			{	
				if(n%i==0)
				{	
					n=n/i;
					j++;
				}
				else
				{	
					break;
				}
			}
			if(j!=0)
			{	
				cout<<i<<"("<<j<<")";
			}
		}
	}
	return;
}
bool primer(int i)
{	
	for(int j=2;j<=sqrt((double)i);j++)
	{	
		if(i%j==0)
		{
			return false;
		}
	}
	return true;
}