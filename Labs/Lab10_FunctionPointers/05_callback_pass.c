#include <stdio.h>
void addNum(int a, int b) {
  printf("Sum is: %d\n", a + b);
}
void calcu(void (*callback)(int, int), int x, int y) {
  callback(x, y);
}
int main() {
  calcu(addNum, 10, 15);
  return 0;
}
