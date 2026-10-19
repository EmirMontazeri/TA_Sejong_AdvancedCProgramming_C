#include <stdio.h>
int sum(int a, int b) {
  return a + b;
}
int main() {
  int (*ptr)(int, int) = sum;
  int result = ptr(7, 3);
  printf("Result: %d", result);
  return 0;
}
