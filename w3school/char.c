#include<stdio.h>
int main() { 

//The character must be surrounded by single quotes, like 'A' or 'c', and we use the %c format specifier to print it:
char myGrade = 'A';
printf("%c", myGrade);

//using ASCII values to represent characters, we can assign integer values to char variables. For example, the ASCII value of 'A' is 65, 'B' is 66, and 'C' is 67. We can use these values to print the corresponding characters:
char a = 65, b = 66, c = 67;
printf("%c", a);
printf("%c", b);
printf("%c", c);

//if you try to store more than a single character, it will only print the last character:

char myText = 'Hello';
printf("%c", myText);

//To store multiple characters (or whole words), use strings

char myText[] = "Hello";
printf("%s", myText);

return 0;

}