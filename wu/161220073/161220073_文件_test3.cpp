#include<iostream>
using namespace std;

bool isprime(int n)
{
	for(int i=2;i<n/2;i++)
		if(n%i==0)return false;
	return true;
}
void fun(int n)
{
	int k=n;
	for(int i=2;i<n/2;i++)
		if(isprime(i))
		{
			int counter=0;
			while(k%i==0)
			{
				counter++;
				k=k/i;
			}
			if(counter!=0)
			cout<<i<<"("<<counter<<")";
		}
}



int main()
{
	int n;
	cin>>n;
	fun(n);
	system("pause");
	return 0;
}