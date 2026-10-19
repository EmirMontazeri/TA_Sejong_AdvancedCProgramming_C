#include <stdio.h>
// Global variable x
int x = 10;
void myfunc() {
  // Local variable with the same name as the global variable
  int x = 25;
  printf("%d\n", x); // Refers to the local variable x
}
int main() {
  myfunc();
  printf("%d\n", x); // Refers to the global variable x
  return 0;
}
