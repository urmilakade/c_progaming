#include<stdio.h>

int main()
{
	int num,i,j;
	printf("Enter the line number : ");
	scanf("%d",&num);

	for(i=1; i<= num; i++)
	{
		for(j= 0; j<i; j++)
		printf("* ");
		
		printf("\n");
	}
	
}
