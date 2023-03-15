/*Write a C program to check if the given number is power of 2.*/
#include<stdio.h>

int power_of_2(int num);
void binary_print(int num);
int main()
{
	int num;
	int  (*f_BIT)(int num);

	printf("Enter the number\n");
	scanf("%d",&num);

	binary_print(num);

	f_BIT  = power_of_2;
	int result  = f_BIT(num);

}

int power_of_2(int num)
{
	if((num & (num-1)))
	printf("%d is not the power of 2\n",num);
	else
	printf("%d is the power of 2\n",num);
}
void binary_print(int num)
{
	printf("BInary of %d\n",num);
	int i;
	for(i =31; i>=0 ; i--)
	printf("%d",(num>>i) & 1);

	printf("\n");
}
