#include <stdio.h>
int main() {
    char name[40];
    // Reading an inputted string
    printf("Type your full name: \n");
    scanf("%[^\n]", name);  
    printf("Hello! %s", name);
    return 0;
}
