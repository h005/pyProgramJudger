#include <iostream>
using namespace std;
int myGetCowR(int year, int k);

int main()
{
	cout<<"	������ year �� k :"<<endl;
	int year,k;
	cin >> year >> k;
	cout<<"��"<<year<<"����Сţ"<<myGetCowR( year, k)<<"ֻ";

}

int myGetCowR(int year, int k)
{
	if(year==1 ||year==2||year==3 )
		return 1;
	else 
		return myGetCowR(year-1,k)+myGetCowR(year-k+1,k);
}