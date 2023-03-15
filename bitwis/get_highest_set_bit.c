/*Write a C program to get highest set bit of a number.*/

#include<stdio.h>

int high_BIT(int num);
void binary_print(int num);
int main()
{
	int num,pos;
	int  (*f_BIT)(int num);

	printf("Enter the number \n");
	scanf("%d",&num);

	binary_print(num);

	f_BIT  = high_BIT;
	int result  = f_BIT(num);
	printf("%d no. HIGHEST bit is SET\n",result);
}

int high_BIT(int num)
{
	int i;
	for(i = 31 ; i>=0 ; i--)
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
