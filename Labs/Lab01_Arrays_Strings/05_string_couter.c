#include <stdio.h>
int main() {
    // The compiler counts the letters and adds +1 for the '\0' automatically
    char message[] = "C Programming"; 
    int i;
    printf("The full string is: %s\n", message);
    // Let's look at the string character by character
    printf("Broken down:\n");
    for(i = 0; i < 13; i++) {
        printf("Index [%d] is character: %c\n", i, message[i]);
    }
    return 0;
}
