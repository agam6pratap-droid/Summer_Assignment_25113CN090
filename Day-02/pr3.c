#include <stdio.h>
int main() {
    int n , mul,reminder ;
    printf("Enter a number: ");
    scanf("%d", &n);
    mul = 1;
    while (n > 0) {
        reminder = n % 10;
        mul = mul * reminder;
        n = n / 10;
    }
    printf("Product of digits: %d\n", mul);
    return 0;
}