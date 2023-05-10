#include<stdio.h>
#include<string.h>
#include<stdlib.h>


typedef struct {
    char *name;
    int value;
} Node;

int main( )
{

char name[] = "ThunderSoft";

Node n1 = { name, 1337 },n2, n3;
n2 = n1; // Shallow copy, n2.name points to the same string as n1.name

printf("\n---------------------------for shallow copy----------------------------\n");
printf("      name[n1]: %s ,value[n1]: %d\n",n1.name,n1.value);
printf("      name[n2]: %s ,value[n2]: %d\n",n2.name,n2.value);

printf("\n    Enter the name for n1 :");
scanf("%s",n1.name);

printf("\n    after chnaging the n1.name \n");
printf("      name[n1]: %s ,value[n1]: %d\n",n1.name,n1.value);
printf("      name[n2]: %s ,value[n2]: %d\n",n2.name,n2.value);


	printf("name[n1] = %p\t",n1.name);
	printf("name[n2] = %p\n",n2.name);


n3.value = n1.value;
n3.name = (char*)malloc(30);
strcpy(n3.name, n1.name); // Deep copy - n3.name is identical to n1.name regarding
                           // its *contents* only, but it's not anymore the same pointer



printf("\n---------------------------for deep  copy----------------------------\n");
printf("      name[n1]: %s ,value[n1]: %d\n",n1.name,n1.value);
printf("      name[n3]: %s ,value[n3]: %d\n",n3.name,n3.value);

printf("\n    Enter the name for n1 :");
scanf("%s",n1.name);

printf("\n    after chnaging the n1.name \n");
printf("      name[n1]: %s ,value[n1]: %d\n",n1.name,n1.value);
printf("      name[n3]: %s ,value[n3]: %d\n",n3.name,n3.value);


	printf("name[n1] = %p\t",n1.name);
	printf("name[n3] = %p\n",n3.name);

}


