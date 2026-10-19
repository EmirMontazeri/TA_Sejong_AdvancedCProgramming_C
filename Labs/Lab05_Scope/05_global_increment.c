#include <stdio.h>
// Global variable
int x = 10;
void myFunction() {
  x = ++x;  // Increment the GLOBAL value of x by 1
}
int main() {
  myFunction();
  printf("%d\n", x); // Print the global variable x
  return 0;
}
