#include<stdio.h>
#include<ctype.h>
#include<iostream>
using namespace std;
int main()
{
    char str[80];
    int i;
    cout<<"����һ���ַ���: "<<endl;
    gets(str);
    for(i=0;str[i]!='\0';i++)
		if(str[i]>'Z'&&str[i]<'a')
		{	
			cout<<"WRONG!";
			return -1;
		}
		else
		{
			str[i]=isalpha(str[i])?str[i]^32:str[i];
    
			cout<<"ת������ַ���: "<<str<<endl;
		}
    return 0;
}