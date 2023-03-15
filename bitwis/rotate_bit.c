// Write a C program to rotate bits of a given number.
#include<stdio.h>

void rotate_BIT(int *num,int p);
void binary_print(int num);
int main()
{
	int num,p;
	void  (*f_BIT)(int *num,int p);

	printf("Enter the number,time \n");
	scanf("%d%d",&num,&p);

	binary_print(num);

	f_BIT  = rotate_BIT;
	f_BIT(&num,p);

	binary_print(num);
}

void rotate_BIT(int *num,int p)
{
	int i,n,j;
	for(i = 0 ; i < p ; i++)
	{
		n = *num & 1;
		*num = *num >>1;
		if(n != (*num & (1<<31)))
		*num = *num ^ (1 << 31);
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
