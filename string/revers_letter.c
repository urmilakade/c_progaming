#include<stdio.h>
#include<string.h>

void revers(char * str, int i ,int j);
void revers_letter(char * str,int ,int);
int main()
{
	char str[30];
	printf("Entern the string\n");
	scanf(" %[^\n]",str);

	void (*fptr) (char *str,int ,int);
	fptr = revers_letter;

	fptr(str,0, strlen(str)-1);
}

void revers_letter(char * str,int w_start,int w_end)
{
	int start,end;
	for(start=end = w_start ; end < w_end ; end++)
	{
		if(str[end] == ' ')
			continue;
		start = end;
		while(str[end]!= ' ' && end<=w_end )
			end++;
		end--;

		revers(str , start,end);
	}
	printf("%s\n", str);
}

void revers(char * str, int i ,int j)
{
	char ch;
	while(i<j)
	{
		ch = str[i];
		str[i] = str[j];
		str[j] = ch;
		i++;
		j--;
	}
}
