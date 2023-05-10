#include<stdio.h>
#include<string.h>
#include<stdlib.h>


typedef struct {
    char *name;
    int value;
} Node;

int main( )
{

//struct Node n1;
char name[] = "ThunderSoft";

//Node n1 = { name, 1337 },n2, n3;

 Node* n1 =(Node *) malloc(sizeof( Node));
//n1->name = name;
//n1->value = 1337;

 n1 =  {  name,  1337 };
// *n1 = (Node) {  name,  1337 };

printf("      name[n1]: %s ,value[n1]: %d\n",n1->name,n1->value);
#if 0
n2 = n1; // Shallow copy, n2.name points to the same string as n1.name
PAVAN
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


	printf("[n1] = %p\t",&n1);
	printf("[n2] = %p\t",&n2);
	printf("[n3] = %p\n",&n3);
#endif
}


