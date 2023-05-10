//17. Write a C program to sort array using pointers.

#include<stdio.h>

void print(int *p,int size );
void sort_array(int *p,int size );
int  main()
{
        void (*f_sort)(int *p,int size ) = sort_array;
	int n,i;
	printf("How many element do yo want to enter :");
	scanf("%d",&n);
	
	int arr[n];
	printf("Enter the %d element\n",n);
	for(i =0 ; i<n; i++)
	scanf("%d",arr+i);

	f_sort(arr,n);
	printf("After softing the element of array: ");
	print(arr,n);

}
void sort_array(int *p , int size)
{
	int i,j;
	for(i= 0 ; i<size ; i++)
	{
		for(j= i+1 ; j<size ; j++)
		if(p[i] > p[j])
		p[i] ^= p[j] ^= p[i] ^= p[j];
	}
}


void print(int *p,int size )
{
	for(int  i=0 ; i< size; i++)
	printf("%d ",p[i]);

	printf("\n");
}
