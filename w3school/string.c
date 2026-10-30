#include<stdio.h>
#include<string.h>
int main()
{
char name[40],name2[50];

fgets(name,sizeof(name),stdin);
fgets(name2,sizeof(name2),stdin);

puts(strcat(name,name2));

printf("%d",strcat(name,name2));



    return 0;
}