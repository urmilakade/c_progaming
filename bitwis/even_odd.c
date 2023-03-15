//Write a C program to check whether a number is even or odd using bitwise operator.


#include<stdio.h>

void even_odd(int num);
void binary_print(int num);
int main()
{
	int num;
	void  (*f_BIT)(int num);

	printf("Enter the number \n");
	scanf("%d",&num);

	binary_print(num);

	f_BIT  = even_odd;
	 f_BIT(num);

}

void even_odd(int num)
{
	if(num & 1)
	printf("%d is odd number\n",num);
	else
	printf("%d is even number\n",num);
}
void binary_print(int num)
{
	printf("BInary of %d\n",num);
	int i;
	for(i =31; i>=0 ; i--)
	printf("%d",(num>>i) & 1);

	printf("\n");
}
