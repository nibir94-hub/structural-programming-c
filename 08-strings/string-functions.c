#include <stdio.h>
#include <string.h>

int main()
{

    char name[] = "abdullah ashraf";

    printf("%d\n",strlen(name));

    printf("%d\n",sizeof(name));

//Concatenate Strings

     char str01[] = "hello ";

     char str02[] = "world";

     strcat(str01,str02);

     printf ("%s\n",str01);

    return 0;
}