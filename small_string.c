#include<stdio.h>
#include<string.h>

char * small_string(char * ptr);
int main()
{
	char str[100],*result;
	printf("Enter the string\n");
	scanf(" %[^\n]",str);
	result = small_string(str);
	printf("Smallest string = %s\n",result);
}
char * small_string(char * ptr)
{
	int i,count = 0 ,cnt_upt = 0;
	char flag = 0, *temp = 0, *final =0;
	for(i=0; ptr[i]; i++)
	{
		if(ptr[i] != 32)
		{
			count++;
			if(flag == 0)
			{
				temp  = ptr+i;
				flag  = 1;
			}
		}
		else
		{    
			flag = 0;
			if(cnt_upt == 0 || cnt_upt > count)
			{
				cnt_upt = count;
				final = temp;
				final[++count] = '\0';
				printf("count = %d\n",cnt_upt);
			}
				count = 0;
		}
	}
	if(cnt_upt == 0 || cnt_upt > count)
	{
		cnt_upt = count;
		final = temp;
		final[++count] = '\0';
		count = 0;
		printf("count = %d\n",cnt_upt);
	}
	printf("Smallest count = %d  %s \n",cnt_upt,final);
	return final;
}
