#include<stdio.h>
int main() {
    int a[20], n, i, b[20];
    printf("Enter the number of elements (max 20): ");
    scanf("%d", &n);
    printf("Enter %d elements: ", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    for(i = 0; i < n; i++) {
     b[n-i-1] = a[i];

    }
    printf("Reversed array: ");
    for(i = 0; i < n; i++) {
        printf("%d ", b[i]);
    }
    printf("\n");
    return 0;
}