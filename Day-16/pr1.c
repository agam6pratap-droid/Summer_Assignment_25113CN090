#include <stdio.h>

int main() {
    int a[20], n, i;
    int sum = 0, total;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n - 1);
    for(i = 0; i < n - 1; i++) {
        scanf("%d", &a[i]);
        sum += a[i];
    }

    total = n * (n + 1) / 2;

    printf("Missing number = %d", total - sum);

    return 0;
}