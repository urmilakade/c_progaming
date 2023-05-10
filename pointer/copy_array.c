//Write a C program to copy one array to another using pointers.

#include<stdio.h>

void copy_arry(int *p,int * q,int size );
int  main()
{
        void (*f_print)(int *p,int * q, int size ) = copy_arry;
	int n,i;
	printf("How many element do yo want to enter :");
	scanf("%d",&n);
	
	int arr[n],prr[n];
	printf("Enter the %d element\n",n);
	for(i =0 ; i<n; i++)
	scanf("%d",arr+i);

	f_print(arr,prr,n);

	for(int  i=0 ; i< n; i++)
	printf("%d ",prr[i]);
	printf("\n");

}

void copy_arry(int *p,int * q ,int size )
{
	for(int  i=0 ; i< size; i++)
		q[i] = p[i];

}
