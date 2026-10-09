#include <stdio.h>
#include <stdlib.h>

int main(void) {

  int arr[5];

  printf("Enter any %lu values\n",
         (sizeof arr /
          sizeof arr[0])); // simple logic to get the no of elements in an array

  int size = (sizeof arr / sizeof arr[0]);
  int count = 0;
  int i = 0;
  while (arr[i-1] != EOF) {
    
    scanf("%d", &arr[i]);
    count++;
    i++;
    }
  
  int sum = 1;
  int ptr = 0;
  for (ptr = 0; ptr < count; ptr++) {
    sum += arr[ptr]; // is this messy code?
  }
  printf("The sum of all the elements is: %d\n", sum);

  return EXIT_SUCCESS;
}
