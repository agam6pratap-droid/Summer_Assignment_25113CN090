#include <stdio.h>
int sum(int a, int b) {
    int s = a + b;
    return s;
}

int main() {
    int c ,d ;
    printf("Enter two numbers: ");
    scanf("%d %d", &c, &d);
    int result = sum(c, d);
    printf("The sum is: %d\n", result);
    return 0;
}