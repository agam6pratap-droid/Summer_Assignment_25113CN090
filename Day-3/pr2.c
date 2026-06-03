#include <stdio.h>
 
int main( ) {
    int n, range;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Enter the range: ");
    scanf("%d", &range);
    for (int i = n; i <= range; i++) {
        int isPrime = 1;
        if (i < 2) isPrime = 0;
        for (int j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                isPrime = 0;
                break;
            }
        }
        if (isPrime) {
            printf("%d ", i);
        }
    }
    printf("\n");
    return 0;
}
