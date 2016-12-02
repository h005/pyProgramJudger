#include<stdio.h>

int convert_letter(char ch)
{
	int n = (int)ch;
	if(97 <= n && n <= 122)
	{
		printf("true\n");
		printf("%c" , n - 32);
	}
	else
	{
		printf("false");
	}
	return 0;
}
int main ()
{
	char ch;
	scanf("%c" , &ch);
	convert_letter(ch);
	return 0;
}