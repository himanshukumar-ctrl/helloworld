#include <stdio.h>
#include <math.h>
int main() {
    double a, b, result;
    printf("Enter the base(a): ");
    scanf("%lf", &a);
     printf("Enter the base(b): ");
    scanf("%lf", &b);
    result = pow(a,b);
    printf("%.2lf ^ %.2lf = %.2lf\n", a, b, result);
    return 0;
}