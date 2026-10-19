#include <stdio.h>

int main(){
    // Defining single and double pointers
    int a = 7;
    int *ptr = &a;
    int **d_ptr = &ptr;
    // Size of double pointer
    printf("%d bytes\n", sizeof(d_ptr));
    // Size of a single pointer
    printf("%d bytes", sizeof(ptr));
    return 0;
}
