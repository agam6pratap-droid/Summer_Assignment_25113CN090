#include <stdio.h>
int main() {
    int a,b,c,n;
    int fibonacci;
    a=0;
    b=1;
    c=0;
    printf("Fibonacci Series: ");
    printf("%d %d ", a, b);
    for (int i = 2; i < 10; i++) {
        c = a + b;
         printf("%d ", c);
        a = b;
        b = c;
    }
    printf("\n");
    return 0;
}