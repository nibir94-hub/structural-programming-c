#include <stdio.h>

int main ()

{

int age[] = {27,21,23,13,12};

int length = sizeof(age)/sizeof(age[0]);

for (int i = 0 ; i < length ; i++)
{

printf("%d\n",age[i]);

}

for (int i = 0 ; i < length ; i++)
{

printf("%p\n",&age[i]);

}




    return 0;
}