#include<iostream>
using namespace std;
void fun( int n )
{	int j,k,f=0;
	int temp=n; 
	int m = n/2; 
	for(int i = 2;i<=n; i++)
	{	for(j = i,k = 0 ;temp%j == 0;k++)
		{	if(temp%j ==0)		temp = temp/j;
			else break;
		}
		if(k != 0)	
		{	cout<<j<<"("<< k<<")";
			f ++;
		}
	}
	return;
}

int main()
{	int n;
	cin>>n;
	fun(n);
	cout<<endl;
	return 0;
}