#include<iostream>
using namespace std;
int myGetCowR(int year, int k);
int main()
{
	int year,k;
	cin>>year>>k;
	cout<<myGetCowR(year,k)<<endl;
	return 0;
}
int myGetCowR(int year, int k)
{
	if(year<k)
		return 1;
	if (year>=k)
		return myGetCowR(year-k+1,k)+myGetCowR(year-1,k);
}

