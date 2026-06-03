#include <stdio.h>
int main() {
    int a[ 20],n,i,lar,slar;
    printf("Enter the number of elements (max 20): ");
    scanf("%d", &n);
    printf("Enter %d elements: ", n);
    for(i=0; i<n; i++) {
        scanf("%d", &a[i]);
    }
    lar = -1;
    slar = -1;
    for(i=0; i<n; i++) {
        if(a[i] > lar) {
            slar = lar;
            lar = a[i];
        } else if(a[i] > slar && a[i] < lar) {
            slar = a[i];
        }
    }
    
    printf("Second Largest = %d\n", slar);
    return 0;
}