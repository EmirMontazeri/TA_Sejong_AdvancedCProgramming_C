#include <stdio.h>
// Define a struct
struct Car {
  char brand[10];
  int year;
};
int main() {
  struct Car car = {"Peugeot", 2005};
  // Declare a pointer to the struct
  struct Car *ptr = &car;
  // Access members using the -> operator
  printf("Brand: %s\n", ptr->brand);
  printf("Year: %d\n", ptr->year);
  return 0;
}
