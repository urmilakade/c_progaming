/* Write a C program to toggle nth bit of a number.*/

#include<stdio.h>

int tog_BIT(int *num,int pos);
void binary_print(int num);
int main()
{
	int num,pos;
	int  (*f_BIT)(int *num,int pos);

	printf("Enter the number and  position\n");
	scanf("%d%d",&num,&pos);

	binary_print(num);

	f_BIT  = tog_BIT;
	int result  = f_BIT(&num,pos);

	binary_print(num);
}

int tog_BIT(int *num,int pos)
{
	*num = *num ^(1<<pos);
	return *num;
}
void binary_print(int num)
{
	printf("BInary of %d\n",num);
	int i;
	for(i =31; i>=0 ; i--)
	printf("%d",(num>>i) & 1);

	printf("\n");
}
