//Write a C program to count trailing zeros in a binary number.

#include<stdio.h>

int trail_zero(int num);
void binary_print(int num);
int main()
{
	int num,pos;
	int  (*f_BIT)(int num);

	printf("Enter the number \n");
	scanf("%d",&num);

	binary_print(num);

	f_BIT  = trail_zero;
	int result  = f_BIT(num);
	printf("trailing Zeros : %d\n",result);
}

int trail_zero(int num)
{
	int i,count =0 ;
	for(i = 0 ; i<=31; i++)
	{
		if((num & (1 << i)) == 0)
		count++;
		else 
		return count;
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
