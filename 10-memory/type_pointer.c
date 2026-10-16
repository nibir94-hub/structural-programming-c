#include <stdio.h>

int main()

{

int mynum[2]={1,2};
char greet[]="hi";//'h''i''\0'

printf("%p\n",(void*)mynum);

printf("%p\n",(void*)(mynum+1));

printf("%p\n",(void*)(mynum+2));

printf("%p\n",(void*)greet);

printf("%p\n",(void*)(greet+1));

    return 0;
}