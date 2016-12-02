#include<iostream>
using namespace std;
int myGetCowR(int,int);
int main()
{	int year,k;
	cout << "请依次输入参数year和k:";
	cin >> year >> k;
	cout << "第" << year << "年有" << myGetCowR(year,k) << "头母牛";
}
int myGetCowR(int year,int k)
{	if (year<k)
		return 1;
	else if 
		return myGetCowR(n-1) +myGetCowR(n-2);
}