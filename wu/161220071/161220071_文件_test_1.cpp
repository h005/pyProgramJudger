#include <iostream> 
using namespace std;
int myGetCowR(int year, int k)
{
	int sum = 0;
	if (year < k)
		return 1;
	else
	{
		int n1 = 1, n2 = 1, n3 = 1, num = 0;
		for (int a = year-k+1; a > 0; a--)
		{
			num = n1 + n3;
			n1 = n2;
			n2 = n3;
			n3 = num;
		}
		return num;
	}
}
int main()
{
	int year;
	int k;
	cout << "please enter year:";
	cin >> year;
	cout << "please enter k:";
	cin >> k;
	cout<<"the number of cow is:"<<myGetCowR(year, k);
	return 0;
}