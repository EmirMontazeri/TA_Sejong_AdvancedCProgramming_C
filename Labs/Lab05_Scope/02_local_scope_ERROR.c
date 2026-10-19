#include <stdio.h>
void Function() {
  // Local variable that belongs to Function
  int x = 12;
}
int main() {
  Function();
  // Print the variable x in the main function
  printf("%d", x);
  return 0;
}
