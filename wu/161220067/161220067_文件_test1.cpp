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
	cout <<"������n��k��";
	cin >>year >>k;
	cout <<"��"<<year<<"����"<<myGetCowR(year ,k)<<"ͷĸţ"<<endl;
	return 0;
}