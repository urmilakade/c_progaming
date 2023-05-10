//Write a C program to find length of string using pointers.

#include<stdio.h>

int str_len(char *ptr);
int main()
{
        int(* f_str_len)(char *ptr) = str_len;
	char str[50];
	printf("Enter the string\n");
	scanf("%s",str);


	int len = f_str_len(str);
	printf("lenthe of string : %d\n",len);
}

int str_len(char *ptr)
{
	int i = 0;
	for(i =0 ; *(ptr+i) ; i++);
	return i;

}
