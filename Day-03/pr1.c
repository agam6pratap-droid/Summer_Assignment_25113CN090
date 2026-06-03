#include <stdio.h>

int main() {
    int prime, i ,count  =0;
    printf("Enter a number ");
    scanf("%d", &prime);
    count = 0;
    for(i = 2; i <= prime/2; i++) {
        if(prime % i == 0) {
            count++;
            break;
        }
    }
    if(count == 0 && prime > 1)
        printf("%d is a prime number.\n", prime);
    else
        printf("%d is not a prime number.\n", prime);
    return 0;
}
