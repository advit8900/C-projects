#include <stdio.h>
#include <stdlib.h>

int fact(int a){
  int result = 1;
  while (a > 0) {
    result = result * a;
    --a;
  }
  return result;
}


int main()
{
  int val = 0;
  printf("Enter value: \n");
  scanf("%d", &val);
  printf("factorial is: %d\n", fact(val));
  return EXIT_SUCCESS;
}
