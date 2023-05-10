//Write a C program to access two dimensional array using pointers.

#include<stdio.h>

void d_arry(int *p,int size,int q );
int  main()
{
        void (*f_print)(int *p,int size,int q ) = d_arry;
	int r,c,i,j;
	printf("Enter the row and colum value :");
	scanf("%d%d",&r,&c);
	
	int arr[r][c];
	printf("Enter the %d element\n",r*c);
	for(i =0 ; i<r; i++)
		for(j =0 ; j<c; j++)
		scanf("%d",arr+i+j);

	f_print(arr,r,c);

}

void d_arry(int *p,int r, int c )
{
	for(int  i=0 ; i< r; i++)
		for(int  j=0 ; j< c; j++)
		
	printf("\n");
}
