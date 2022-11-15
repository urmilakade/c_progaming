#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n,i,max,temp;
	printf("how many element you want to enter\n");
	scanf("%d",&n);
	int *ptr = (int *)malloc(n * sizeof(int));

	printf("Enter the %d element\n",n);
	for(i = 0; i<n; i++)
		scanf("%d",ptr+i);

	printf("\nEnter element are\n");
	for(i = 0; i<n; i++)
		printf("%d ",*(ptr+i));

	max = (ptr[0] - ptr[1]);
	if(max <0)
		max =-max;
	for(i = 0; i<n; i++)
	{
	   for(int j = i+1 ;j<n; j++)
	   {

		temp  = ( ptr[i] - ptr[j]);
		if(temp <0)
			temp = -temp;
		if(temp > max)
			max = temp;

	   }
	}
	printf("\nmaximun difference between element is %d\n",max);

}
