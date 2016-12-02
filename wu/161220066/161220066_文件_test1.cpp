#include<iostream>
using namespace std;
int myGetCowR(int year,int k)
{
	if(year>=1&&year<=k-1)
		return 1;
	else
		return myGetCowR(year-1,k)+myGetCowR(year-k+1,k);
}
int main()
{
	int year,k;
	cin>>year>>k;
	cout<<myGetCowR(year,k);
	return 0;
}
