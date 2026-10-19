#include <stdio.h>
// Global variable x
int x = 14;
int main(){
   // Local variable x
   int x = 48;{
      extern int x;
      printf("Value of global x is %d\n", x);
   }
   printf("Value of local x is %d\n", x);
   return 0;
}
