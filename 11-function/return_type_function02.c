#include<stdio.h>

int sum_two(int x,int y)
{
    return x + y ;
}

int main()

{

int result_1 = sum_two(9,7);
int result_2 = sum_two(5,7);
int result_3 = sum_two(90,7);
int result_4 = sum_two(9,17);
int result_5 = sum_two(6,7);


printf("%d\n",result_1);
printf("%d\n",result_2);
printf("%d\n",result_3);
printf("%d\n",result_4);
printf("%d\n",result_5);

int result_arr[5];

result_arr[0] = sum_two(4,5);
result_arr[1] = sum_two(1,5);
result_arr[2] = sum_two(41,5);
result_arr[3] = sum_two(4,35);
result_arr[4] = sum_two(4,53);

for(int i=0 ; i<5 ; i++)
{
    printf("result_%d =  %d",i+1,result_arr[i]);
}

return 0;
}