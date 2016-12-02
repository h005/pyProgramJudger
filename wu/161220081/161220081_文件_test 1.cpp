#include<iostream>
#include<cmath>
using namespace std;

int myGetCowR(int year, int k)
{
	int cow = 1;
	if(year < k)
		return 1;
	else
	{
	for(int i = k;i <= year; i ++)
	{	
		cow += myGetCowR(i - k + 1, k);
	}
	return cow;
	}
}
int main ()
{
	int n = 1 , k = 1;
	cin>>n>>k;
	cout<<myGetCowR(n, k);
	return 0;
}