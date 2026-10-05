#include <iso646.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

bool isPrime(int a) {

  for (int j = 0; j * j <= a; j++) {
    if (a % j == 0)
      return false;
  }
  return true;
}

int main() {

  int val = 0;
  while (val != 69) {
    printf("Enter the value you want to check: \n");
    scanf("%d", &val);

    if (isPrime(val)) {
      printf("Is a prime number :)\n\n");
    } else {
      printf("is not a prime number :(\n\n");
    }
  }
  return EXIT_SUCCESS;
}
