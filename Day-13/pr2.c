#include <stdio.h>
int main() {
    int a[ 20],n,s,i;
    s=0;
    printf("Enter the number of elements (max 20): ");
    scanf("%d", &n);
    printf("Enter %d elements: ", n);
    for(i=0; i<n; i++) {
        scanf("%d", &a[i]);
    }
    
    for(i=0; i<n; i++) {
        s += a[i];
    }
    float avg = (float)s / n;
    printf("Sum = %d\n", s);
    printf("Average = %.2f\n", avg);
    return 0;
}