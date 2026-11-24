#include <stdio.h>

int main() {
    char op;
    double num;
    double result;

    printf("Enter starting number: ");
    scanf("%lf", &result);

    while (1) {
        printf("\nCurrent Result: %.2f\n", result);
        printf("Enter operator (+, -, *, /, C to clear, E to exit): ");
        scanf(" %c", &operator);

        if (operator == 'E' || operator == 'e') {
            printf("Goodbye! Final Result: %.2f\n", result);
            break;
        }

        if (operator == 'C' || operator == 'c') {
            result = 0;
            printf("\nResult reset to 0.\n");
            printf("Enter a new starting number: ");
            scanf("%lf", &result);
            continue;
        }

        printf("Enter next number: ");
        scanf("%lf", &num);

        switch (operator) {
            case '+':
                result = result + num;
                break;
            case '-':
                result = result - num;
                break;
            case '*':
                result = result * num;
                break;
            case '/':
                if (num == 0) {
                    printf("Error: Cannot divide by zero!\n");
                } else {
                    result = result / num;
                }
                break;
            default:
                printf("Invalid operator! Please try again.\n");
                break;
        }
    }

    return 0;
}
