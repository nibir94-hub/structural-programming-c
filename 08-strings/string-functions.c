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

     //strcpy

     strcpy(str01,str02);//copying str02 to str 01 

     printf ("%s\n",str01);

     strcat(str01,str02);

     printf ("%s\n",str01);

     //Compare Strings

     char str3[] = "ABBA";
     char str4[] = "DABBA";
     char str5[] = "jabba";
     char str6[] = "jabba";

    
      printf("%d\n",strcmp(str3,str4));

       printf("%d\n",strcmp(str3,str5));

        printf("%d\n",strcmp(str4,str5));

        printf("%d\n",strcmp(str5,str6));//strcmp if it is 0 thst means the str are same
       



    return 0;
}