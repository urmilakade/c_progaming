#include<stdio.h>
#include<stdlib.h>

int main( )
{
	char *ptr1 = malloc(10 * sizeof(char));
	ptr1 =  "Thunndersoft";

//	printf("%s\n",ptr1);

	free(ptr1);
	free(ptr1);

}
