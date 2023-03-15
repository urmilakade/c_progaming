/*Implement own sizeof operator*/

#include<stdio.h>

void my_sizeof(void * p);
int main()
{
	int x;
	my_sizeof(&x);

}

void my_sizeof(void * p)
{
	int j = (p+1) - (p);
	printf("%d\n",j);
}
