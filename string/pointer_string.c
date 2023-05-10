#include<stdio.h>

int main()
{
	char str[] = "India";
	char *p = str;

	while(*p)
	{
		printf("%c---------%p\n",*p,p);
		p++;
	}
}
