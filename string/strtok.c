#include<stdio.h>
#include<string.h>

int main()
{
  char str[]="....why?but;not,oh+++whee$when~!@#$%^&*()___+<>?{?>";

  char seps[] = "?!;.\t+$\n()~!@#%^&*_+`-+=,/:'<>{}[]";

  char *t;

  t = strtok(str,seps);

  while(t != NULL)
  {
	  printf("%s ",t);
	  t = strtok(NULL, seps);
  }
  printf("\n");
  return 0;
}
