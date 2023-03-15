//Write a C program to count total zeros and ones in a binary number.

#include<stdio.h>

void Z_O_count(int num);
void binary_print(int num);
int main()
{
	int num;
	void  (*f_BIT)(int num);

	printf("Enter the number \n");
	scanf("%d",&num);

	binary_print(num);

	f_BIT  = Z_O_count;
	f_BIT(num);

}

void Z_O_count(int num)
{
	int i,zero = 0 ,once = 0;
	for(i = 0 ; i <= 31 ; i++)
	{
		if(num &(1<< i))
		once++;
		else 
		zero++;
	}
	printf("zeros : %d once : %d\n",zero,once);
}
void binary_print(int num)
{
	printf("BInary of %d\n",num);
	int i;
	for(i =31; i>=0 ; i--)
		printf("%d",(num>>i) & 1);

	printf("\n");
}
