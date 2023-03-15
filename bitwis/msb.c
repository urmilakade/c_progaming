/* Write a C program to check Most Significant Bit (MSB) of a number is set or not.*/

#include<stdio.h>

void check_MSB(int num);

int main()
{
	int num;
	void (*f_MSB)(int num);

	printf("Enter the number\n");
	scanf("%d",&num);

	f_MSB  = check_MSB;
	f_MSB(num);
}

void check_MSB(int num)
{
	if(num & (1 << 31))
		printf("MSB of number is SET\n");
	else
		printf("MSB of number is NOT SET\n");
}
