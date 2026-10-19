#include <stdio.h>
#include <string.h>
// A structure called myInfo
struct myInfo {
  int myAge;
  char myCls;
  char myInit[10]; // String
};
int main() {
  struct myInfo i1;
   // Assign a value to the string using the strcpy function
  strcpy(i1.myInit, "RDJ");
  // Print value
  printf("My initials are: %s\n", i1.myInit);
  return 0;
}
