#include<iostream>
#include<cmath>
using namespace std;
void fun(int);
int main()
{	int n;
	cout << "请输入一个整数n:";
	cin >> n;
	fun(n);
	return 0;
}
void fun(int n)
{	int a[100],b[100];
	int i,j,k=-1,t=1;
	for (i=2;i<=n;i++)
	{	for (j=2;j<=sqrt((double)i)+1;j++)
		{	if (i%j==0)
				break;
			else if (j==sqrt((double)i)+1)
			{	k+=1;
				a[k]=i;
			}
		}
	}
	if (a[0]==n)
		cout << n << "(" << 1 << ")";
	else
		for (i=0;i<k;i++)
		{	for (j=0;j<=n;j++)
			{	t*=a[k];
				if (i%t!=0)
				{	b[i]=j;
					break;
				}
			}
		}
		for (i=0;i<k;i++)
		{	if (b[i]!=0)
				cout << a[i] << "(" << b[i] << ")";
		}

}
