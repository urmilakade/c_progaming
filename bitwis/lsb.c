/*Write a C program to check Least Significant Bit (LSB) of a number is set or not.*/

#include<stdio.h>
int main()
{
	int num;
	printf("Enter the number\n");
	scanf("%d",&num);

	if(num & 1)
		printf("LSB of number is SET\n");
	else
		printf("LSB of number is NOT SET\n");
}
