#include <stdio.h>
int main() {
    int setbits = 0, num;

    printf("Enter a number: ");
    scanf("%d", &num);
    while (num > 0) {
        setbits += num & 1;
        num >>= 1;
    }
    printf("Number of set bits: %d\n", setbits);
    return 0;
}