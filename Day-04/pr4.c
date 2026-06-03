#include <stdio.h>
#include <math.h>

int main(){
    int ar, original, remainder, arm, num, n = 0;
    printf("Enter the range (e.g., 1-1000): ");
    scanf("%d
        ", &ar);
    for (int i = 1; i <= ar; i++) {
        original = i;
        arm = 0;
        n = 0;
        while (original != 0) {
            original /= 10;
            n++;
        }
        num = i;
        while (num != 0) {
            remainder = num % 10;
            arm = arm + pow(remainder, n);
            num /= 10;
        }
        if (arm == i) {
            printf("%d is an Armstrong number.\n", i);
        }
    }
    return 0;
}