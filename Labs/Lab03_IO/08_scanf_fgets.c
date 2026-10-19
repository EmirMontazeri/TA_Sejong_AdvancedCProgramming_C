#include <stdio.h>
int main() {
    char name[40];
    // Reading an inputted string
    printf("Type your full name: \n");
    fgets(name, sizeof(name), stdin);  
    printf("Hello! %s", name);
    return 0;
}
