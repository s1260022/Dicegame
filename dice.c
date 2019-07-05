#include <stdio.h>
#include <stdlib.h>
#include<time.h>

int main(){
  srand((unsigned int )time(NULL));
  int a,b;
  printf("Rolling the dice...\n");
  a = rand() % 6 + 1;
  b = rand() % 6 + 1;
  printf("Dice1 : %d\n",a);
  printf("Dice2 : %d\n",b);
  printf("Total value : %d\n",a + b);

  return 0;
}
