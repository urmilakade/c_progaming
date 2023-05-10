//16. Write a C program to find reverse of a string using pointers.

#include<stdio.h>
void  str_revers(char *ptr);
int main()
{
        void (* f_str_revers)(char *ptr) = str_revers;
	char str[50];
	printf("Enter the string\n");
	scanf("%s",str);


	 f_str_revers(str);
	printf("Revers string : %s\n",str);
}

void str_revers(char *ptr)
{
	int i = 0,len,j;
	for(len =0 ; *(ptr+len) ; len++);
	
	for(i =0, j = len-1; i < j ; i++,j--)
	ptr[i] ^= ptr[j] ^= ptr[i] ^= ptr[j];
	
}
