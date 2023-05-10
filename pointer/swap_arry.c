//Write a C program to swap two arrays using pointers.

#include<stdio.h>

void print_arry(int *p ,int n);
void swap_arry(int *p,int * q,int size );
int  main()
{
        void (*f_print)(int *p,int * q, int size ) = swap_arry;
	int n,i;
	printf("How many element do yo want to enter :");
	scanf("%d",&n);
	
	int arr[n],prr[n];
	printf("Enter the %d element for first array\n",n);
	for(i =0 ; i<n; i++)
	scanf("%d",arr+i);

	printf("Enter the %d element for second array\n",n);
	for(i =0 ; i<n; i++)
	scanf("%d",prr+i);

	f_print(arr,prr,n);

	printf("Elements of first array\n");
	print_arry(arr,n);
	printf("Elements of second array\n");
	print_arry(prr,n);



}

void swap_arry(int *p,int * q ,int size )
{
	for(int  i=0 ; i< size; i++)
		q[i] ^= p[i] ^= q[i] ^= p[i];

}

void print_arry(int *p ,int n)
{
	for(int  i=0 ; i< n; i++)
	printf("%d ",p[i]);
	printf("\n");
}
