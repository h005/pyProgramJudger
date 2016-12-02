#include <iostream>
using namespace std;
int myGetCowR(int year, int k);

int main()
{
	cout<<"	请输入 year 和 k :"<<endl;
	int year,k;
	cin >> year >> k;
	cout<<"第"<<year<<"年有小牛"<<myGetCowR( year, k)<<"只";

}

int myGetCowR(int year, int k)
{
	if(year==1 ||year==2||year==3 )
		return 1;
	else 
		return myGetCowR(year-1,k)+myGetCowR(year-k+1,k);
}