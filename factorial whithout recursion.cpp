#include <stdio.h>

int main() {
  int factorial = 1; 

  for (int i = 1; i <= 3; i++) {
    factorial *= i; 
  }

  printf("%d", factorial);

  return 0;
}
