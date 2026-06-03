#include <stdio.h>

int main() {
    int a[20], n, sum, i, j;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements: ");
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter required sum: ");
    scanf("%d", &sum);

    for(i = 0; i < n ; i++) {
        for(j = 0; j <= i; j++) {
            if(a[i] + a[j] == sum) {
                printf("Pair found: %d + %d = %d\n",
                       a[i], a[j], sum);
            }
        }
    }

    return 0;
}