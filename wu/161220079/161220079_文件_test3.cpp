#include<iostream>
using namespace std;
#include<cmath>
void fun(int n);
bool is_sushu(int n);

int main()
{
	int n;
	cin>>n;
	fun(n);
}

void fun(int n)
{
	int d=n;
	int count2=0;
	if(is_sushu(n))
		cout<<n<<"(1)"<<endl;
	else
	{
		do
		{ 
			count2++;
			n=n/2;
		}while(n%2==0);
		cout<<"2("<<count2<<")";
		
		int c=n;

		for(int i=3,j=0;i<c;i+=2)
		{if(is_sushu(i) && n%i==0)
			{
				int count=0;
				do{
					count++;
					n=n/i;
				
				}while(n%i==0);
				cout<<i<<"("<<count<<")";
			}
		
		}





		
	}


		
	
}

bool is_sushu(int n)
{
	if(n==1)
		return false;
	else 
	{
		int b= n;
		for (int i=1;i<b;i+=2)
		{
			if(n%i==0)
				return false;
				return true;
		}
	}
}
