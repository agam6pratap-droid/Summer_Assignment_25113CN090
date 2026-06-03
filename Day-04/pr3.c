#include <stdio.h>
#include <math.h>

int main(){
    int armstrong, original, remainder, arm, num, n = 0;
    arm = 0;
    printf("Enter an integer: ");
    scanf("%d", &armstrong);
    original = armstrong;
    while (original != 0) {
        original /= 10;
        n++;
    }
    num = armstrong;
    while (num != 0) {
        remainder = num % 10;
        arm = arm + pow(remainder, n);
        num /= 10;
    
    }
    if (arm == armstrong) {
        printf("%d is an Armstrong number.\n", armstrong);
    } else {
        printf("%d is not an Armstrong number.\n", armstrong);
    }
    return 0;
}