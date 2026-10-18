#include<stdio.h>

void print_arr(int myarr[10])
{
for(int i = 0 ; i < 10 ; i++)
{
printf("%d\n",myarr[i]);
}
}
int add_five(int  x)
{
    return x + 5;
}

int main()
{

int marks[10] = {20,25,56,78,98,89,100,33,12,2};


print_arr(marks);
int x;
scanf("%d",&x);
printf("after adding 5 we get ....%d\n",add_five(x));

    return 0;
}