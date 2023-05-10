//2. Write a C program to add two numbers using pointers.

#include<stdio.h>
int sum(int *p , int *q);
int main()
{
	int (*f_sum)(int *p , int *q);
	int x,y,result;
	printf("Enter the two number :");
	scanf("%d%d",&x,&y);

	f_sum = sum;
	result = f_sum(&x,&y);
	printf("Sum of two number is %d\n",result);
}

int sum(int *p , int *q)
{
	return(*p + *q);
}
