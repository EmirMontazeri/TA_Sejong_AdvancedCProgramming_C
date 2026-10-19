#include <stdio.h>
#include <string.h>
// A structure called myInfo
struct myInfo {
  int myAge;
  char myCls;
  char myInit[10]; // String
};
int main() {
   // Create a structure variable and assign values to it
  struct myInfo i1 = {24, 'A', "SR"};
   // Print value
  printf("%d %c %s", i1.myAge, i1.myCls, i1.myInit);
  return 0;
}
