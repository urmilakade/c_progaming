//15. Write a C program to compare two strings using pointers.

#include<stdio.h>

int str_cmp(char *dest ,char *src);
int main()
{
        int(* f_str_cmp)(char *ptr,char *src) = str_cmp;
	char str[50],dest[70];
	printf("Enter the  2 string\n");
	scanf("%[^\n] %[^\n]",dest,str);


	int len = f_str_cmp(dest,str);
	if(len == 0)
		printf("strings are same\n");
	else if (len > 0)
		printf("string 1 greater than string 2\n");
	else 
		printf("string 2 greater than string 1 \n");
}

int str_cmp(char *dest,char * src)
{
	int len;
	for(len =0 ; *(dest+len) ; len++)
	{
		if(dest[len] == src[len])
		continue;
		else 
		break;
	}
	if(dest[len] == '\0')
		return 0;
	else 
		return(dest[len] - src[len]);


}
