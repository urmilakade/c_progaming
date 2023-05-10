//Write a C program to search an element in array using pointers.

#include<stdio.h>

void search_ele(int *p,int size,int ele );
int  main()
{
        void (*f_print)(int *p,int size,int ele ) = search_ele;
	int n,i;
	printf("How many element do yo want to enter :");
	scanf("%d",&n);
	
	int arr[n];
	printf("Enter the %d element\n",n);
	for(i =0 ; i<n; i++)
	scanf("%d",arr+i);

	int ele;
	printf("Enter the element to search :");
	scanf("%d",&ele);

	f_print(arr,n,ele);

}

void search_ele(int *p,int size,int ele )
{
	for(int  i=0 ; i< size; i++)
	if(p[i] == ele )
	{
		printf("Element avalable at %d position in array\n",i);
		return;
	}

	printf("element not fountd in array\n");
}
