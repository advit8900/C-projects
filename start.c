#include <stdio.h>
#include <stdlib.h>

int power(int a, int b) {
  int result = 1;
  for (int i = 1; i <= b; i++) {
    result *= a;
  }
  return result;
}

int main() {
  int x = 0;
  int y = 0;
  printf("Enter value followed by power> \n");
  scanf("\n%d%d", &x, &y);

  printf("The result is: %d\n", power(x, y));

  return EXIT_SUCCESS;
}
