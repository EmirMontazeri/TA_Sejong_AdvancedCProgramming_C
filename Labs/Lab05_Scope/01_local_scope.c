#include <stdio.h>
void Function() {
  // Local variable that belongs to Function
  int x = 12;
  // Print the variable x
  printf("%d", x);
}
int main() {
  Function();
  return 0;
}
