//Write a C program to flip bits of a binary number using bitwise operator.

#include<stdio.h>

void flip_BIT(int *num);
void binary_print(int num);
int main()
{
	int num;
	void  (*f_BIT)(int *num);

	printf("Enter the number \n");
	scanf("%d",&num);

	binary_print(num);

	f_BIT  = flip_BIT;
	f_BIT(&num);

	binary_print(num);
}

void flip_BIT(int *num)
{
	int i;
	for(i = 0 ; i <= 31 ; i++)
	{
		*num = *num ^(1<< i);
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
