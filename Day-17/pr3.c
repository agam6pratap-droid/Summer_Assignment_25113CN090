#include <stdio.h>
int main() {
    int a[100],b[100],m,n,i,j,c[200],k=0;
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

for(i=0; i<m; i++) {
        
        for(j=0; j<n; j++) {
            if(b[i]==a[j]) {
                c[j] = b[i];
                k++;
            }
        } 
    }
    printf("Intersection array: ");
    for(i=0; i<k; i++) {
        printf("%d ", c[i]);
    }
    return 0;
}