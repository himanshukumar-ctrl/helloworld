#include <stdio.h>

int main() {
    char operator;
    double num;
    double result = 0.0;
    int is_start = 1;

    printf("=== Simple C Calculator ===\n");
    printf("Operations: +, -, *, /\n");
    printf("Press 'C' to clear/reset | Press 'E' to exit\n\n");

    while (1) {
        if (is_start == 1) {
            printf("Enter starting number: ");
            scanf("%lf", &result);
            is_start = 0;
        }

        printf("Current Result: %.2f\n", result);
        printf("Enter operator (+, -, *, /, C, E): ");
        scanf(" %c", &operator);

        if (operator == 'E' || operator == 'e') {
            printf("Exiting. Final Result: %.2f\n", result);
            break;
        }

        if (operator == 'C' || operator == 'c') {
            result = 0.0;
            is_start = 1;
            printf("\n--- Calculator Cleared ---\n\n");
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
                    printf("Error: Division by zero is not allowed!\n");
                } else {
                    result = result / num;
                }
                break;
            default:
                printf("Invalid operator chosen!\n");
                break;
        }
        printf("\n");
    }

    return 0;
}
