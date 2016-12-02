#include<iostream>
using namespace std;

int su[100001]={0};

int getmi(int n,int k)
{
	int tmp = n;
	int ret = 0;
	do
	{
		ret++;
		tmp /=k;
	}while(tmp%k==0);
	return ret;
}

void fun(int n)
{
	for(int i=2;i<= 100001;i++)
	{
		if( !su[i] && n%i ==0)
		{
			cout<<i<<"("<<getmi(n,i)<<")";
		}
	}
	cout<<endl;
}

int main()
{
	int tmp = 0;
	for(int i=2;i<100001;i++)
	{		
		for(tmp =i+i;tmp<=100001;tmp+=i)
		{
			su[tmp] =-1;//-1 is not sushu
		}
	}
	int n;
	cin>>n;
	fun(n);
	return 0;
}