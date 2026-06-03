#include <stdio.h>
int main() {
    int a[100],b[100],m,n,i,c[200];
    printf("Enter the number of elements: ");
    scanf("%d %d", &n, &m);
    printf("Enter %d elements: ", n);
    for(i=0; i<n; i++) {
        scanf("%d", &a[i]);
    }
    printf("Enter %d elements: ", m);
    for(i=0; i<m; i++) {
        scanf("%d", &b[i]);
    }
    for(i=0; i<n; i++) {
        c[i]=a[i];
    }
    for(i=0; i<m; i++) {
        c[n+i]=b[i];
    }
    printf("Merged array: ");
    for(i=0; i<n+m; i++) {
        printf("%d ", c[i]);
    }
    return 0;
}