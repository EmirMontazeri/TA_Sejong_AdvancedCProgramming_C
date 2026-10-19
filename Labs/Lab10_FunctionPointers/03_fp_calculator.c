#include <stdio.h>
void sum(int a, int b) { printf("Result: %d\n", a + b); }
void sub(int a, int b) { printf("Result: %d\n", a - b); }
void multi(int a, int b) { printf("Result: %d\n", a * b); }
int main() {
  int choice, x = 6, y = 4;
  void (*operations[3])(int, int) = { sum, sub, multi };
  printf("x = %d, y = %d\n\n", x, y);
  printf("Choose an operation:\n");
  printf("0: Add\n1: Subtract\n2: Multiply\n");
  scanf("%d", &choice);
  if (choice >= 0 && choice < 3) {
    operations[choice](x, y);
  } else {
    printf("Invalid choice\n");
  }
  return 0;
}
