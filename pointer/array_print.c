//Write a C program to input and print array elements using pointer.

#include<stdio.h>

void print(int *p,int size );
int  main()
{
        void (*f_print)(int *p,int size ) = print;
	int n,i;
	printf("How many element do yo want to enter :");
	scanf("%d",&n);
	
	int arr[n];
	printf("Enter the %d element\n",n);
	for(i =0 ; i<n; i++)
	scanf("%d",arr+i);

	f_print(arr,n);

}

void print(int *p,int size )
{
	for(int  i=0 ; i< size; i++)
	printf("%d ",p[i]);

	printf("\n");
}
