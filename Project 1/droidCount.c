#include <stdio.h>
#include <stdlib.h>
#define SIZE 100


int main(void)
{
  int arr[SIZE];
  int val = 0;
  int count = 0;

  printf("enter values: \n");
  while (count < SIZE && scanf("%d", &val) != EOF) {
    arr[count] = val;
    count++;
  }

  int sum = 0;
  for (int i = 0; i < count;i++) {
    sum += arr[i];
  }
  printf("the sum of all values is: %d\n", sum);

  

  return EXIT_SUCCESS;
}
