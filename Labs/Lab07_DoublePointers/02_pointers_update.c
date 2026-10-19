#include <stdio.h>

int main() {
  int Num = 12;
  int *ptr = &Num;
  int **pptr = &ptr;

  printf("Old Num = %d\n", Num);

  **pptr = 34;   // changes Num

  printf("New Num = %d\n", Num);
  return 0;
}
