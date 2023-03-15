/*Write a C program to get nth bit of a number.*/

#include<stdio.h>

void check_nBIT(int num,int pos);
void binary_print(int num);
int main()
{
	int num,pos;
	void (*f_nBIT)(int num,int pos);

	printf("Enter the number and  position\n");
	scanf("%d%d",&num,&pos);

	binary_print(num);

	f_nBIT  = check_nBIT;
	f_nBIT(num,pos);
}

void check_nBIT(int num,int pos)
{
	if(num & 1)
		printf("%d bit of number is SET\n",pos);
	else
		printf("%d bit of number is NOT SET\n",pos);
}
void binary_print(int num)
{
	printf("BInary of %d\n",num);
	int i;
	for(i =31; i>=0 ; i--)
	printf("%d",(num>>i) & 1);

	printf("\n");
}
