#include <stdio.h>
int factorial(int n) {
    if (n == 0) {
        return 1;
    }
    int fact = n * factorial(n - 1);
    return fact;
}

int main() {
    int c;
    printf("Enter a number: ");
    scanf("%d", &c);
    int result = factorial(c);
    printf("The factorial is: %d\n", result);
    return 0;
}