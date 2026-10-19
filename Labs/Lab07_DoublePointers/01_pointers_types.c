#include <stdio.h>

int main() {
  int Num = 12;      // normal variable
  int *ptr = &Num;   // pointer to int
  int **pptr = &ptr;   // pointer to pointer

  printf("Num = %d\n", Num);
  printf("*ptr = %d\n", *ptr);
  printf("**pptr = %d\n", **pptr);

  return 0;
}
