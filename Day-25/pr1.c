#include <stdio.h>
int main() {
    int a[32],b[32],c[64],n,m,i,j=0,k=0;
    printf("Enter the number of elements in the arrays: ");
    scanf("%d", &n);
    printf("Enter the number of elements in the arrays: ");
    scanf("%d", &m);
    printf("Enter the elements of  sorted array A: ");
    for(i=0; i<n; i++) {
        scanf("%d", &a[i]);
    }
    printf("Enter the elements of sorted array B: ");
    for(i=0; i<m; i++) {
        scanf("%d", &b[i]);
    }

    for(i = 0; i < n; i++) {
        while(j < m && b[j] < a[i]) {
            c[k++] = b[j++];
        }
        c[k++] = a[i];
    }

    for(i = j; i < m; i++) {
        c[k++] = b[i];
    }

    printf("Merged sorted array: ");
    for(i = 0; i < k; i++) {
        printf("%d ", c[i]);
    }
    printf("\n");
    return 0;
}