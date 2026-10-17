#include<stdio.h>
void myname(char name[])
{
    printf("hello! %s\n",name);
}
void nam_age(char NAM[],int AGE)
{
printf("name = %s (*_*) age = %d(>_<)\n",NAM,AGE);
}
void sum_2(int x,int y)
{
    int sum = x + y;
    printf("sum = %d\n",sum);
}
int main()
{

myname("nibir");

myname("abdullah ashraf");

myname("ur dada (>_<)! ");

nam_age("abdullah",20);

sum_2(2,4);

sum_2(6,7);

sum_2(9,0);

    return 0;
}