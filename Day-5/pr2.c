#include <stdio.h>
int main() {
    int num,reminder,result,fact,n;
    result = 0;
    fact =1;
    printf("Enter a number: ");
    scanf("%d", &num);
    n=num;
    while(num != 0) {
        reminder = num % 10;
        for(int i = 1; i <= reminder; i++) {
            fact *= i;
        }
        result += fact;
        fact = 1;
        num /= 10;
    }
    if(result == n) {
        printf("%d is a strong number.\n", n);
    } else {
        printf("%d is not a strong number.\n", n);
    }
    return 0;
}