#include<iostream>
using namespace std;
int  myGetCowR(int year, int k)
{
	if(year < k)
		return 1;
	else
		return myGetCowR(year-k+1,k)+myGetCowR(year-1,k);
}
int main()
{
	int year,k;
	cin >> year >> k;
	cout << myGetCowR(year,k);
	return 0;
}