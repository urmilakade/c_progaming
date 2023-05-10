#include<stdio.h>

int main()
{
	char str[10];
	printf("Enter the string\n");
	scanf(" %[^\n]",str);
	printf("String is = %s\n",str);
}
