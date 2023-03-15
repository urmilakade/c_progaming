/*Write a C program to swap even and odd bits.*/

#include<stdio.h>

int swap_even_odd(int *num);
void binary_print(int num);
int main()
{
	int num;
	int  (*f_BIT)(int *num);

	printf("Enter the number\n");
	scanf("%d",&num);

	binary_print(num);

	f_BIT  = swap_even_odd;
	int result  = f_BIT(&num);

	binary_print(num);
}

int swap_even_odd(int *num)
{
	int j = 0 ,k = 1,x,y;
	for(j = 0 ; j<=31 ; )
	{
		x = (*num >> j) & 1;
		y = (*num >> k) & 1;
		
		if(x != y)
		{
			*num = *num ^ (1<<j);
			*num = *num ^ (1<<k);
		}
		j = j+2;
		k = k+2;
	}
	return *num;
}
void binary_print(int num)
{
	printf("BInary of %d\n",num);
	int i;
	for(i =31; i>=0 ; i--)
	printf("%d",(num>>i) & 1);

	printf("\n");
}
