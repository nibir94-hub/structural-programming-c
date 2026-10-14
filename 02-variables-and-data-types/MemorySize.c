#include <stdio.h>
int main()
{
int myInt;
float myFloat;
double myDouble;
char myChar;
printf("%zu\n", sizeof(myInt));
printf("%zu\n", sizeof(myFloat));
printf("%zu\n", sizeof(myDouble));
printf("%zu\n", sizeof(myChar));
//we use the %zu format specifier to print the result, instead of %d. This is because the compiler expects the sizeof operator to return a value of type size_t, which is an unsigned integer type. [...]
    return 0;
}
