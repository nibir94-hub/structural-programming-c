#include<stdio.h>

int main ()
{

int mynum[] = {32,44,67,56,89};
int *p = mynum;//&mynum[0]
int length =sizeof(mynum)/sizeof(mynum[0]);

for (int i=0;i<length;i++)
{
printf("%d\n",*p);;

p++;


/* *p gives the current element value.
p++ moves the pointer to the next element in the array.
No array index (i) is needed - the pointer keeps track of the position.*/


}



    return 0;
}