#include <stdio.h>
int main() {
    int x,n;
    printf("Enter a number: ");
    scanf("%d", &x);
    printf("Enter the power: ");
    scanf("%d", &n);
    int result = 1;
    for(int i = 0; i < n; i++) {
        result *= x;
    }
    printf("%d raised to the power of %d is %d\n", x, n, result);
    return 0;
}