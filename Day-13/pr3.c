#include <stdio.h>
int main() {
    int a[ 20],n,i,largest,smallest;
    printf("Enter the number of elements (max 20): ");
    scanf("%d", &n);
    printf("Enter %d elements: ", n);
    for(i=0; i<n; i++) {
        scanf("%d", &a[i]);
    }
    largest = smallest = a[0];
    for(i=1; i<n; i++) {
        if(a[i] > largest) {
            largest = a[i];
        }
        if(a[i] < smallest) {
            smallest = a[i];
        }
    }
    printf("Largest = %d\n", largest);
    printf("Smallest = %d\n", smallest);
    return 0;
}