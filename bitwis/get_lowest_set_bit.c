//Write a C program to get lowest set bit of a number.

#include<stdio.h>

int low_BIT(int num);
void binary_print(int num);
int main()
{
	int num,pos;
	int  (*f_BIT)(int num);

	printf("Enter the number \n");
	scanf("%d",&num);

	binary_print(num);

	f_BIT  = low_BIT;
	int result  = f_BIT(num);
	printf("%d no. lowest bit is SET\n",result);
}

int low_BIT(int num)
{
	int i;
	for(i = 0 ; i <= 31 ; i++)
	{
		if( (num) & (1 << i))
		return i;
	}
}
void binary_print(int num)
{
	printf("BInary of %d\n",num);
	int i;
	for(i =31; i>=0 ; i--)
	printf("%d",(num>>i) & 1);

	printf("\n");
}
