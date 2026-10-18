#include<stdio.h>
int sum_two(int x,int y)
{
    return x + y ;
}
int main()
{
int a,b;

printf("enter the 1st number :");
if (scanf("%d",&a) != 1 )
{
    printf("invalid input why u make mistake ('~')");
    return 1;

}
printf("enter the 1st number :");
if (scanf("%d",&b) != 1 )
{
    printf("invalid input why u make mistake ('~')");
    return 1;

}

printf("your sum of two numbers are = %d\n",sum_two(a,b));




    return 0;
}