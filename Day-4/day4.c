#include<stdio.h>

int main() {
    int count = 0;
    int n,d;
    
    printf("Enter a number: ");
    scanf("%d", &n);
    while(n > 0) {
        d = n % 10;
        count ++;
        n /= 10;
    }
    printf("Number of digits: %d\n", count);
    return 0;
}
