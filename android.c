#import <stdio.h>
#import <stdlib.h>

void power(int a, int b){
  int result = 1;
  for (int i = 0;i<b;i++) {
    result *= a;
  }
  printf("result is: %d\n", result);
}


int main()
{

  
  printf("Helo world!\n");
  int x = 0; int y = 0;

  printf("enter value followed by power: \n");
  scanf("%d%d", &x, &y);

  power(x, y);

  return EXIT_SUCCESS;
}
