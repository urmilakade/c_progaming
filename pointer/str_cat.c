//14. Write a C program to concatenate two strings using pointers.

#include<stdio.h>

int str_cat(char *dest ,char *src);
int main()
{
        int(* f_str_cat)(char *ptr,char *src) = str_cat;
	char str[50],dest[70];
	printf("Enter the  2 string\n");
	scanf("%[^\n] %[^\n]",str,dest);


	int len = f_str_cat(dest,str);
	printf("string: %s\n",dest);
}

int str_cat(char *dest,char * src)
{
	int i = 0,len=0,j;
	for(len =0 ; *(dest+len) ; len++);

	for(i =0 ; *(src+i) ; i++,len++)
		dest[len] = src[i];
		
		dest[len] = '\0';

}
