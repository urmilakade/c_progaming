#include<stdio.h>
#include<string.h>

void reverSTR(char * str);
void (*fptr)(char *);
void revers(char * str, int i, int j);
void (*fptr1)(char * str, int i, int j);
void main()
{

	char str[50];
	int i,j;
	printf("Enter the string\n");
	scanf(" %[^\n]",str);

	fptr = reverSTR;
	fptr(str);

	fptr1 = revers;
	printf("Enter the position\n");
	scanf("%d%d",&i,&j);
	fptr1(str,i,j);
}

void reverSTR(char * str)
{
	int i,j;
	char ch;
	for(i=0,j= strlen(str)-1 ; i<j ;i++,j--)
	{
		ch = str[i];
		str[i] = str[j];
		str[j] = ch;

	}

	printf("%s\n",str);
	
}

void revers(char * str, int i,int j)
{
	char ch;
	while(i<j)
	{
		ch = str[i];
		str[i]= str[j];
		str[j] = ch;
		i++;
		j--;
	}
	printf("%s\n",str);
}
