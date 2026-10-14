#include <stdio.h>

int main()
{
int matrix[2][3] = { {1, 4, 2}, {3, 6, 8} };


printf("%d\n", matrix[0][2]);  // Outputs 2


matrix[0][0] = 9;

printf("%d\n", matrix[0][0]);  // Now outputs 9 instead of 1



    return 0;
}