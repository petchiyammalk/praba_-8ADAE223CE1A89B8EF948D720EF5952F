#include <stdio.h>

unsigned long long factorial(int n) {
    // Base case: If n is 0 or 1, the factorial is 1.
    if (n <= 1) {
        return 1;
    }
    // Recursive case: Factorial(n) = n * Factorial(n - 1)
    return (unsigned long long)n * factorial(n - 1);
}

int main() {
    int num;
    printf("Enter a non-negative integer: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        unsigned long long result = factorial(num);
        printf("Factorial of %d is %llu\n", num, result);
    }

    return 0;
}
