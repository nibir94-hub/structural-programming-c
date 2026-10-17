#include<stdio.h>
void greet()
{
    printf("hello!  (>_<) \n");
}
void sum()
{
int x = 6,y = 7,sum;
sum = x+y;
printf("sum=%d",sum);
}
int main()
{

//functionn can be called multiple times

for (int i = 0 ; i<5 ; i++)
{
    greet();
}

sum();

    return 0;
}