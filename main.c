#include <stdio.h>
#include "math_ops.h"

int my_function_return_number() {
  int sum = 2 + 2;

  return sum;
}

int main() {
  printf("Hola Mundo!\n");

  int my_number = 0;
  float my_float = 2;
  char my_char = 'A';

  if (my_float > 4) {
    printf("Hola");
    int value = my_function_return_number();

    printf("Number function = %d\n", value);
  } else {
    int result = sum(2, 3);

    printf("Un else\n");
    printf("El valor del modulo es: %d\n", result);
  }

  for (int i = 0; i < 5; i++) {

    printf("i = %d\n", i);
  }

  return 0;
}
