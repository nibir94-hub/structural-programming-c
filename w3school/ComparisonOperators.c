#include <stdio.h>

int main ()
{
// find out if 5 is greater than 3

int x = 5;
int y = 3;
printf("%d", x > y); // returns 1 (true) because 5 is greater than 3

//Real-Life Examples

int age = 18;

printf("%d\n", age >= 18); // 1 (true), old enough to vote
printf("%d\n", age < 18);  // 0 (false)

int passwordLength = 5;

printf("%d\n", passwordLength >= 8); // 0 (false), too short
printf("%d\n", passwordLength < 8);  // 1 (true), needs more characters

    return 0;
}