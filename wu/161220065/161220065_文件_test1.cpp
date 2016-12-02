#include<iostream>
using namespace std;
int newborn(int year,int k);
int big(int year, int k)
{
	if (year < k)
		return 1;
	else return big(year - 1, k) + newborn(year - k + 1, k);
}
int newborn(int year, int k)
{
	if (year < k)
		return 0;
	else return big(year - 1, k);
}
int myGetCowR(int year, int k)
{
	if (year < k)
		return 1;
	else return myGetCowR(year - 1, k) + big(year - 1, k);
}
int main()
{
	int year, k;
	cin >> year >> k;
	cout << myGetCowR(year-1, k) << endl;
	return 0;
}