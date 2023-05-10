#include<stdio.h>
#include<string.h>

void pallindrome(char *str);
int main()
{
        void (*fptr)(char *str);
	fptr = pallindrome;
	char str [20];
	printf("Enter the string\n");
	scanf("%s",str);

	fptr(str);

}
void pallindrome(char *str)
{

	int i,j;
	for(i=0,j=strlen(str)-1; i<j; i++,j--)
	{
		if(str[i] != str[j])
			break;
	}
	if(i==j)
		printf("Pallindrome\n");
	else 
		printf("Not pallindrome\n");
}
