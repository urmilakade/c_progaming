//Write a C program to reverse an array using pointers.

#include<stdio.h>

void revers_arry(int *p,int size );
int  main()
{
        void (*f_print)(int *p,int size ) = revers_arry;
	int n,i;
	printf("How many element do yo want to enter :");
	scanf("%d",&n);
	
	int arr[n];
	printf("Enter the %d element\n",n);
	for(i =0 ; i<n; i++)
	scanf("%d",arr+i);

	f_print(arr,n);
	for(int  i=0 ; i< n; i++)
	printf("%d ",arr[i]);
	printf("\n");

}

void revers_arry(int *p,int size )
{	
	int j = size-1;
	for(int  i=0 ; i< size/2; i++,j--)
	p[i] ^= p[j] ^= p[i] ^=p[j];

}
