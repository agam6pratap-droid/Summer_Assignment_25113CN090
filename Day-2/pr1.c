#include <stdio.h>

int main() {
    int n,sum,d;
    printf("Enter a number: ");
    scanf("%d", &n);
    sum = 0;
    d = 0;
    while (n > 0) {
        d = n % 10;
        sum = sum + d;
        n = n / 10;
    }
    printf("Sum of digits: %d\n", sum);
    return 0;
}
