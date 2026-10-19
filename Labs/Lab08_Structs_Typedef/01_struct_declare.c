#include <stdio.h>
// Create a structure called myInfo
struct myInfo {
  int myAge;
  char myCls;
};
int main() {
  // Create a structure variable of myInfo called i1
  struct myInfo i1;
  // Assign values to members of s1
  i1.myAge = 22;
  i1.myCls = 'B';
  // Print values
  printf("My age is: %d\n", i1.myAge);
  printf("My class is: %c\n", i1.myCls);
  return 0;
}
