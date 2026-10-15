#include <stdio.h> 
int main ()
{

char full_name [40];

printf ("please enter your full name ;");

printf("\n");

fgets(full_name,sizeof(full_name),stdin);

printf ("your name is %s",full_name);


    return 0;

}