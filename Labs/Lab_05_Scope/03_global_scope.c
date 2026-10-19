#include <stdio.h>
//Global Variable 'x'
int x = 7;
void myfunc() {
  //We can use 'x' here
  printf("%d\n", x + 1);
}
int main() {
  myfunc();
  //We can also use 'x' here
  printf("%d\n", x);
  return 0;
}
