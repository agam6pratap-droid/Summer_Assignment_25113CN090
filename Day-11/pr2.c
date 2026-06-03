#include <stdio.h>
int max(int a, int b) {
    int s = (a > b) ? a : b;
    return s;
}

int main() {
    int c ,d ;
    printf("Enter two numbers: ");
    scanf("%d %d", &c, &d);
    int result = max(c, d);
    printf("The maximum is: %d\n", result);
    return 0;
}