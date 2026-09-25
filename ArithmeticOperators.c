#include <stdio.h>

int main ()

{
//using different arithmetic operators in one example:
int x = 10;
int y = 3;

printf("%d\n", x + y); // 13
printf("%d\n", x - y); // 7
printf("%d\n", x * y); // 30
printf("%d\n", x / y); // 3
printf("%d\n", x % y); // 1

int z = 5;
++z;
printf("%d\n", z); // 6
--z;
printf("%d\n", z); // 5

//When dividing two integers in C, the result will also be an integer. 

int a = 10;
int b = 3;
printf("%d\n", a / b);   // Integer division, result is 3

double c = 10.0;
double d = 3.0;
printf("%f\n", c / d);   // Decimal division, result is 3.333

//Incrementing and decrementing

int x = 5;

++x; // Increment x by 1
printf("%d\n", x); // 6


int x = 5;

--x; // Decrement x by 1
printf("%d\n", x); // 4

// if I increase a value and later decrease it, it will go up by one and then back down by one - ending up where it started:

int x = 5;

++x; // Increment x by 1 (x becomes 6)
--x; // Decrement x by 1 (x becomes 5 again)

printf("%d\n", x); // 5

//Real Life Example: Counting People

int peopleInRoom = 0;

// 3 people enter
peopleInRoom++;
peopleInRoom++;
peopleInRoom++;

printf("%d\n", peopleInRoom); // 3

// 1 person leaves
peopleInRoom--;

printf("%d\n", peopleInRoom); // 2




    return 0;
}