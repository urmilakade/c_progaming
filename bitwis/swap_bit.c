/*Write a C program to swap two numbers using bitwise operator.*/

#include<stdio.h>

void swap_num(int *urr,int *yoo);
void binary_print(int num);
int main()
{
	int num,p;
	void  (*f_BIT)(int *urr,int *yoo);

	printf("Enter the 2 number \n");
	scanf("%d%d",&num,&p);

	printf("Before swap : num = %d,p =%d\n",num,p);

	f_BIT  = swap_num;
	f_BIT(&num,&p);

	printf("after swap : num = %d,p =%d\n",num,p);
}

void swap_num (int *urr,int *yoo)
{
	*urr^=*yoo^=*urr^=*yoo;
}
void binary_print(int num)
{
	printf("BInary of %d\n",num);
	int i;
	for(i =31; i>=0 ; i--)
		printf("%d",(num>>i) & 1);

	printf("\n");
}
