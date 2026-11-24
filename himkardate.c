#include <stdio.h>
#include <string.h>
int main() {
    int d, m, y;
    char choice;
    do {
        printf("Enter date (dd mm yyyy): ");
        scanf("%d %d %d", &d, &m, &y);
        if (d < 1 || d > 31 || m < 1 || m > 12 || y < 1) {
            printf("Invalid date. Please try again.\n");
            break;
        }
      