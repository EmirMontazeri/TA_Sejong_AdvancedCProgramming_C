#include <stdio.h>
#include <string.h>
struct Car {
  char brand[10];
  char model[10];
  int year;
};
int main() {
  struct Car car1  = {"BMW", "740i", 1999};
  struct Car car2;
  car2 = car1;
  strcpy(car2.model, "750iL");
  car2.year = 1998;
  printf("%s %s %d\n", car1.brand, car1.model, car1.year);
  printf("%s %s %d\n", car2.brand, car2.model, car2.year);
return 0;
}
