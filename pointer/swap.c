//2. Write a C program to swap two numbers using pointers.

#include<stdio.h>
int swap(int *p , int *q);
int main()
{
	int (*f_swap)(int *p , int *q);
	int x,y,result;
	printf("Enter the two number :");
	scanf("%d%d",&x,&y);


	printf("before swap x = %d , y = %d\n",x,y);
	f_swap = swap;
        f_swap(&x,&y);
	printf("After swap x = %d , y = %d\n",x,y);
}

int swap(int *p , int *q)
{
	*p ^= *q ^= *p ^= *q;
}
