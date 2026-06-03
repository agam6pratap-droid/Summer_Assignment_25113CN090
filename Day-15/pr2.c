#include <stdio.h>

int main() {
    int a[20], n, i, j, temp;
    temp = 0;

    printf("Enter the number of elements (max 20): ");
    scanf("%d", &n);

    printf("Enter %d elements: ", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    temp = a[0];
    for(i=0; i<n-1; i++) {
        
        a[i] = a[i+1];
        

    }
    a[n-1] = temp;
    printf("Left shifted array: ");
    for(i=0; i<n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}
