#include <stdio.h>

int main ()

{

int i = 0;

while (i < 5) {
  printf("%d\n", i);
  i++;
}


int countdown = 3;

while (countdown > 0) {
  printf("%d\n", countdown);
  countdown--;
}
printf("Happy New Year!!\n");

//Do/While Loop

int i = 0;

do {
  printf("%d\n", i);
  i++;
}
while (i < 5);


int i = 10;

do {
  printf("i is %d\n", i);
  i++;
} while (i < 5);


int number;

do {
  printf("Enter a positive number: ");
  scanf("%d", &number);
} while (number > 0);


//For Loop

int i;

for (i = 0; i < 5; i++) {
  printf("%d\n", i);
}


int i;

for (i = 0; i <= 10; i = i + 2) {
  printf("%d\n", i);
}


int sum = 0;
int i;

for (i = 1; i <= 5; i++) {
  sum = sum + i;
}

printf("Sum is %d", sum);

int i;

for (i = 5; i > 0; i--) {
  printf("%d\n", i);
}

//NESTED LOOPS

int i, j;

// Outer loop



for (i = 1; i <= 2; ++i) {
  printf("Outer: %d\n", i);  // Executes 2 times

  // Inner loop
  for (j = 1; j <= 3; ++j) {
    printf(" Inner: %d\n", j);  // Executes 6 times (2 * 3)
  }
}



    return 0;
}