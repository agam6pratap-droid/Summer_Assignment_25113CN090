#include <stdio.h>
int main() {
    int n,num,reverse,reminder;
    printf("Enter a number: ");
    scanf("%d", &n);
    reverse =0;
    num =n;
    while (num > 0) {
        reminder = num % 10;
        reverse = (reverse * 10) + reminder;
        num = num / 10;
    }
    if(n == reverse) {
        printf("%d is a palindrome number.\n", n);
    } else {
        printf("%d is not a palindrome number.\n", n);
    }
    return 0;
}