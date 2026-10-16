#include <stdio.h>

int main()

{

              //[0][1][2][3]...........
int mynum [7] = {43,44,78,90,89,67,50};

int * p = mynum;//points to mynum[0]

printf("%d\n",*p);//mynum[0]

printf("%d\n",*(p+1));//mynum[1]

printf("%d\n",*(p+2));//mynum[2]

printf("%d\n",*(p+3));//mynum[3]

printf("%d\n",*(p+4));//mynum[4]

//increment and decrement in pointer same func as before basically

int age[10]={13,32,43,60,56,18};

int *ag = age;

printf("age %d\n",*ag);//age[0]=13
ag++;
printf("age %d\n",*ag);//age[1]=32
ag++;
printf("age %d\n",*ag);//age[2]=43
ag--;
printf("age %d\n",*ag);//age[1]=32
ag++;
printf("age %d\n",*ag);//age[2]=43
ag-=2;
printf("age %d\n",*ag);//age[0]=13
//pointer substraction
int *start = &age[1];
int *end = &age[5];

printf("%ld\n",end-start);

    return 0;
    
}