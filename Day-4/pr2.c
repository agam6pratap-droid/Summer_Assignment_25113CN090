#include <stdio.h>
int main() {
    int a,b,c,n;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    int fibonacci;
    a=0;
    b=1;
    c=0;
    printf("Fibonacci Series: ");
    printf("%d %d ", a, b);
    for (int i = 0; i < (n-2); i++) {
        c = a + b;
         printf("%d ", c);
        a = b;
        b = c;
    }
    printf("\n");
    return 0;
}