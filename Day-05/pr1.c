#include <stdio.h>
int main() {
    int num,result;
    result = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    for(int i = 1; i < num; i++) {
        if(num % i == 0) {
            result += i;
        }
    }
    if(result == num) {
        printf("%d is a perfect number.\n", num);
    } else {
        printf("%d is not a perfect number.\n", num);
    }
    return 0;
}