#include <stdio.h>

int main ()

{

int my_age = 20 ;

int *ptr = &my_age ;

printf("%d is  the age \n",my_age);

printf("%p is  the address of my_age \n",&my_age);

printf("%p is  the address of my_age \n",ptr);//this also saves the memory location as value

//valuue at pointer

printf("%d is value at pointer \n",*ptr);

    return 0;
}