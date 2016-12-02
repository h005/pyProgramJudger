#include <iostream>
using namespace std;
int myGetCowR (int year, int k)
{	if( year <= k-1)   return 1;
	return myGetCowR(year-1,k)+myGetCowR(year-k+1,k);
}
int main()
{	int year ,k;
	cin>> year >> k;
	cout<< myGetCowR(year,k) <<endl;
	return 0;
}