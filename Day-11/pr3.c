#include <stdio.h>
int prime(int a) {
    if (a <= 1) {
        return 0;
    }
    for (int i = 2; i * i <= a; i++) {
        if (a % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int c;
    printf("Enter a number: ");
    scanf("%d", &c);
    int result = prime(c);
    if (result) {
        printf("%d is a prime number.\n", c);
    } else {
        printf("%d is not a prime number.\n", c);
    }
    return 0;
}