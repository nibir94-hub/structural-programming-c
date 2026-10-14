#include <stdio.h>
int main ()
{
int x = 10;
int y = 3;
printf("%d\n", x + y);
printf("%d\n", x - y);
printf("%d\n", x * y);
printf("%d\n", x / y);
printf("%d\n", x % y);
int z = 5;
++z;
printf("%d\n", z);
--z;
printf("%d\n", z);
int a = 10;
int b = 3;
printf("%d\n", a / b);
double c = 10.0;
double d = 3.0;
printf("%f\n", c / d);
int x = 5;
++x;
printf("%d\n", x);
int x = 5;
--x;
printf("%d\n", x);
int x = 5;
++x;
--x;
printf("%d\n", x);
int peopleInRoom = 0;
peopleInRoom++;
peopleInRoom++;
peopleInRoom++;
printf("%d\n", peopleInRoom);
peopleInRoom--;
printf("%d\n", peopleInRoom);
    return 0;
}
