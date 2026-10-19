#include <stdio.h>
int main() {
   int age;
   float height;
   char initial;
   printf("Enter your age, height (in meters), and first initial: ");
   int result = scanf("%d %f %c", &age, &height, &initial);
   if (result == 3) {
       printf("You entered: Age = %d, Height = %.2f, Initial = %c\n", age, height, initial);
   } else {
       printf("Failed to read all values.\n");
   }
   return 0;
}
