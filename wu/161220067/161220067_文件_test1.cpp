#include <iostream>
using namespace std;
int myGetCowR(int year,int k)
{
	if (year <=k)
		return 1;
	else return myGetCowR (year-1,k)+myGetCowR(year-k,k);
}
int main ()
{
	int year ,k ;
	cout <<"请输入n与k：";
	cin >>year >>k;
	cout <<"第"<<year<<"年有"<<myGetCowR(year ,k)<<"头母牛"<<endl;
	return 0;
}