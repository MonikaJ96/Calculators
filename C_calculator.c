#include <stdio.h>

int main(void) {
  int a, b, suma;
  char znak;
  scanf("%d %c %d", &a, &znak, &b);
  switch (znak){
    case '+':
      suma = 0;
      printf("%i\n", a+b);
      break;
    case '-':
      suma = 0;
      printf("%i\n", a-b);
      break;
    case '*':
      suma = 1;
      printf("i\n", a*b);
      break;
  }
  return 0;}
