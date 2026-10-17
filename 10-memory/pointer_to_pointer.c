#include<stdio.h>

int main ()
{

//pointer that stores the address of another pointer.

int age = 20;

int *ptr = &age;

int **pptr = &ptr;

printf("age = %d\n",age);

printf("*ptr = %d\n",*ptr);

printf("**pptr = %d\n",**pptr);

**pptr = 30;//age=30

printf("age = %d\n",age);

    return 0;
}