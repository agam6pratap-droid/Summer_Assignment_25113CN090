#include <stdio.h>
int main() {
    int a[100],b[100],m,n,i,c[200],j,k=0;
    int flag=0;
    printf("Enter the number of elements: ");
    scanf("%d %d", &n, &m);
    printf("Enter %d elements: ", n);
    for(i=0; i<n; i++) {
        scanf("%d", &a[i]);
        c[k++]=a[i];
    }
    printf("Enter %d elements: ", m);
    for(i=0; i<m; i++) {
        scanf("%d", &b[i]);
    }
    for(i=0; i<m; i++) {
        flag=0;
        for(j=0; j<n; j++) {
            if(b[i]==a[j]) {
                flag=1;
                break;
            }
        }
        if(flag==0) {
            c[k++]=b[i];
        }
    }
    printf("Union array: ");
    for(i=0; i<k; i++) {
        printf("%d ", c[i]);
    }
    return 0;
}