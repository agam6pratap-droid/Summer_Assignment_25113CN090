#include <stdio.h>

int main() {
    int a[20], n, i, j, duplicate;

    printf("Enter the number of elements (max 20): ");
    scanf("%d", &n);

    printf("Enter %d elements: ", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    for(i = 0; i < n; i++) {
        duplicate = 0;

  
        for(j = 0; j < i; j++) {
            if(a[i] == a[j]) {
                duplicate = 1;
                break;
            }
        }

        if(duplicate)
            continue;

     
        for(j = i + 1; j < n; j++) {
            if(a[i] == a[j]) {
                printf("Duplicate element found: %d\n", a[i]);
                break;
            }
        }
    }

    return 0;
}