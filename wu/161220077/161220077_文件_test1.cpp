#include<iostream>
using namespace std;

int myGetCowR(int year, int k)
{
	if(year <k)
		return 1;
	return myGetCowR(year-k+1,k)+myGetCowR(year-1,k);
	
}
int main()
{
	int k,year;
	cin>>year>>k;
	cout<<myGetCowR(year,k)<<endl;
	return 0;
}