#include <stdio.h>

int main() {
    int n, sum = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        sum += 2 * i - 1;
    }

    printf("Sum of the first %d odd numbers = %d\n", n, sum);
    printf("n^2 = %d\n", n * n);

    if (sum == n * n) {
        printf("The sum of the first %d odd numbers is equal to %d^2.\n", n, n);
    } else {
        printf("The sum of the first %d odd numbers is NOT equal to %d^2.\n", n, n);
    }

    return 0;
}