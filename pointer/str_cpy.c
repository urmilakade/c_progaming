//13. Write a C program to copy one string to another using pointers.

#include<stdio.h>

int str_cpy(char *dest ,char *src);
int main()
{
        int(* f_str_cpy)(char *ptr,char *src) = str_cpy;
	char str[50],dest[50];
	printf("Enter the string\n");
	scanf("%[^\n]",str);


	int len = f_str_cpy(dest,str);
	printf("string: %s\n",dest);
}

int str_cpy(char *dest,char * src)
{
	int i = 0;
	for(i =0 ; *(src+i) ; i++)
		dest[i] = src[i];
		
		dest[i] = '\0';

}
