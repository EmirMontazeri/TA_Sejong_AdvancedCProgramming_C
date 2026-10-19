#include <stdio.h>
int main() {
    float prices[4]; // Array to store prices of 4 items
    float total = 0;
    int i;
    // Input: Entering prices for 4 items
    printf("Enter the price for 4 items:\n");
    for(i = 0; i < 4; i++) {
        printf("Item %d: $", i + 1);
        scanf("%f", &prices[i]);
    }
    // Processing: Calculating the total
    for(i = 0; i < 4; i++) {
        total = total + prices[i];
    }
    printf("\nTotal Bill: $%.2f\n", total);
    return 0;
}
