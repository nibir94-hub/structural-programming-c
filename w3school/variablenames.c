#include <stdio.h>
int main()
{
   // Good variable name
int minutesPerHour = 60;

// OK, but not so easy to understand what m actually is
int m = 60;

printf("Minutes per hour: %d\n", minutesPerHour);

printf("Variable m: %d\n", m);

return 0;
}