#include <stdio.h>
int main() {
    int a[ 20],n,i,l,ele;
    printf("Enter the number of elements (max 20): ");
    scanf("%d", &n);
    printf("Enter %d elements: ", n);
    for(i=0; i<n; i++) {
        scanf("%d", &a[i]);
    }
    printf("Enter the element to search: ");
    scanf("%d", &ele);
    l = -1;
    for(i=0; i<n; i++) {
        if(a[i] == ele) {
            l = i;
            break;
        }
    }
    if(l != -1) {
        printf("Element found at index: %d\n", l);
    } else {
        printf("Element not found\n");
    }
    return 0;
}