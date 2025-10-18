#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int number = 0;
    printf("Enter the number of prices: ");
    if (scanf("%d", &number) != 1 || number < 0) {
        printf("Invalid number.\n");
        return 1;
    }

    float *prices = NULL;
    if (number > 0) {
        prices = malloc((size_t)number * sizeof *prices);
        if (prices == NULL) {
            printf("Memory allocation failed!\n");
            return 1;
        }
    }

    for (int i = 0; i < number; i++) {
        printf("Enter price #%d: ", i + 1);
        if (scanf("%f", &prices[i]) != 1) {
            printf("Invalid input.\n");
            free(prices);
            return 1;
        }
    }

    int newNumber = 0;
    printf("Enter a new number of prices: ");
    if (scanf("%d", &newNumber) != 1 || newNumber < 0) {
        printf("Invalid number.\n");
        free(prices);
        return 1;
    }

    if (newNumber == 0) {
        free(prices);
        printf("No prices to store.\n");
        return 0;
    }

    float *temp = realloc(prices, (size_t)newNumber * sizeof *prices);
    if (temp == NULL) {
        printf("Could not realloc memory!\n");
        free(prices);
        return 1;
    }
    prices = temp;

    if (newNumber > number) {
        for (int i = number; i < newNumber; i++) {
            printf("Enter price #%d: ", i + 1);
            if (scanf("%f", &prices[i]) != 1) {
                printf("Invalid input.\n");
                free(prices);
                return 1;
            }
        }
    }

    printf("\nPrices:\n");
    for (int i = 0; i < newNumber; i++) {
        printf("Price #%d: $%.2f\n", i + 1, prices[i]);
    }

    free(prices);
    return 0;
}
