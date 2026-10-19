#include <stdio.h>
struct Car {  // Without typedef
  char brand[10];
  int year;
};
typedef struct { // With typedef
  char brand[10];
  int year;
} Car;
int main() {
  struct Car car1 = {"Porsche", 1995}; // needs "struct"
  Car car2 = {"DS", 1969}; // shorter with typedef
  printf("%s %d\n", car1.brand, car1.year);
  printf("%s %d\n", car2.brand, car2.year);
  return 0;
}
