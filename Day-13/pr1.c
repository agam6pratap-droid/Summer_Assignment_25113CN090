#include <stdio.h>
int main() {
    int a[ 20],n,i;
    printf("Enter the number of elements (max 20): ");
    scanf("%d", &n);
    printf("Enter %d elements: ", n);
    for(i=0; i<n; i++) {
        scanf("%d", &a[i]);
    }
    printf("You entered: ");
    for(i=0; i<n; i++) {
        printf("%d ", a[i]);
    }
    return 0;
}