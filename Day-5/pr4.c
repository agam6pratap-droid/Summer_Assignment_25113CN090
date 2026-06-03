#include <stdio.h>
int main() {
    int num ;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Largest prime factor of %d is:\n", num);
    int largest_prime = -1;
    for(int i = 2; i <= num; i++) {
        if(num % i == 0) {
            int is_prime = 1;
            for(int j = 2; j * j <= i; j++) {
                if(i % j == 0) {
                    is_prime = 0;
                    break;
                }
            }
            if(is_prime) {
                largest_prime = i;
            }
        }
    }
    if(largest_prime != -1) {
        printf("%d\n", largest_prime);
    } else {
        printf("No prime factors found.\n");
    }
    return 0;
}