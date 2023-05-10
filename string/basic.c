#include<stdio.h>

int main()
{
	 char str[] = "India";
	 int i;
	 for(i =0 ; str[i]; i++)
	 {
		 printf("%c--->%p\n",str[i],&str[i]);
	 }
}
