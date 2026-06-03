#include <stdio.h>

int main() {
    int a[20], n, i, j;
    int maxFreq = 0, maxElement;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements: ");
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    for(i = 0; i < n; i++) {
        int count = 1;

        // Skip already counted elements
        int visited = 0;
        for(j = 0; j < i; j++) {
            if(a[i] == a[j]) {
                visited = 1;
                break;
            }
        }

        if(visited)
            continue;

        for(j = i + 1; j < n; j++) {
            if(a[i] == a[j]) {
                count++;
            }
        }

        if(count > maxFreq) {
            maxFreq = count;
            maxElement = a[i];
        }
    }

    printf("Element with maximum frequency = %d\n", maxElement);
    printf("Frequency = %d\n", maxFreq);

    return 0;
}