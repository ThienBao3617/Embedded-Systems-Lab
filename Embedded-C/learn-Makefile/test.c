#include <stdio.h>
#include "calc.h"

int main() {
    int a, b;
    int choices[4], numChoices = 0;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("\nChoose operations (separated by space, e.g., '1 3' for add & multiply):\n");
    printf("1. Addition (+)\n");
    printf("2. Subtraction (-)\n");
    printf("3. Multiplication (*)\n");
    printf("4. Division (/)\n");
    printf("Enter your choices: ");

    while (numChoices < 4 && scanf("%d", &choices[numChoices]) == 1) {
        numChoices++;
        if (getchar() == '\n') break; 
    }

    printf("\nResults:\n");
    for (int i = 0; i < numChoices; i++) {
        switch (choices[i]) {
            case 1:
                printf("Addition: %d + %d = %d\n", a, b, add(a, b));
                break;
            case 2:
                printf("Subtraction: %d - %d = %d\n", a, b, sub(a, b));
                break;
            case 3:
                printf("Multiplication: %d * %d = %d\n", a, b, mul(a, b));
                break;
            case 4:
                if (b != 0)
                    printf("Division: %d / %d = %.2f\n", a, b, div(a, b));
                else
                    printf("Error: Division by zero is not allowed!\n");
                break;
            default:
                printf("Invalid choice: %d\n", choices[i]);
        }
    }

    return 0;
}
