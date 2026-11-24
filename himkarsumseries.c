#include <stdio.h>
int main() {
    long long N;
    printf("Enter upper limit N: ");
    if (scanf("%lld", &N) != 1 || N < 1) {
        printf("Invalid input. Please enter a positive integer.\n");
        return 1;
    }
    long long k = N / 5; 
    long long sum = 1 + (5 * k * (k + 1)) / 2; // Sum of the series
    printf("The sum is: %lld\n", sum);
    return 0;
}