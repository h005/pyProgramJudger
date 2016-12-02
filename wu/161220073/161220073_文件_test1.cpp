#include<iostream>
using namespace std;
int myGetCowR(int year,int k)
{
	if(year<=0)
		return 0;
	if(year<k)
		return 1;
	int result=0;
	for(int i=1;i<k;i++)
	{
		result+=myGetCowR(year-i-1,k);
	}
	return result;
}
int main()
{
	int year;
	cin>>year;
	int k;
	cin>>k;
	cout<<myGetCowR(year,k);
	system("pause");
	return 0;
}