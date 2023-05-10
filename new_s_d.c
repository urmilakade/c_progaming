#include<stdio.h>
 #include<string.h>
 #include<stdlib.h>


typedef struct {
    char *name;
    int value;
} Node;

int main()
{
Node n1, n2, n3;

printf("n1 = %p ,n2 = %p , n3 = %p\n",&n1,&n2,&n3);
char name[] = "This is the name";

n1 = (Node){ name, 1337 };
n2 = n1; // Shallow copy, n2.name points to the same string as n1.name
printf("n1 = %p ,n2 = %p , n3 = %p\n",&n1,&n2,&n3);
printf("n1.name = %s ,n1.value = %d\n",n1.name, n1.value);
printf("n2.name = %s ,n2.value = %d\n",n2.name, n2.value);
printf("n1.name = %p ,n1.value = %p\n",n1.name, &n1.value);
printf("n2.name = %p ,n2.value = %p\n",n2.name, &n2.value);

n3.value = n1.value;
n3.name = strdup(n1.name); // Deep copy - n3.name is identical to n1.name regarding
                           // its *contents* only, but it's not anymore the same pointer

}
