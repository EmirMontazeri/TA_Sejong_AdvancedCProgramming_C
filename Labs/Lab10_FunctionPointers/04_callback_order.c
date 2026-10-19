#include <stdio.h>
void sayHi() {
  printf("Hi from callback!\n");
} // Normal Function
void runCallback(void (*callback)()) {
  printf("Before callback...\n");
  callback();
  printf("After callback.\n");
} // Receiver of a function pointer
int main() {
  runCallback(sayHi);
  return 0;
} // runs itself and calls sayHi
