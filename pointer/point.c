//1. Write a C program to create, initialize and use pointers.

#include<stdio.h>

int main()
{
	int X;
	printf("ENter the number\n");
	scanf("%d",&X);
	char *ptr;
	ptr = &X;
	ptr++;
		
	printf("%d\n",*ptr);
	
}
