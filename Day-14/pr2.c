#include <stdio.h>

int main() {
    int a[20], n, count, i, j;
    
    printf("Enter the number of elements (max 20): ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    for(i = 0; i < n; i++) {
        count = 1;

       
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

        printf("Element %d occurs %d times\n", a[i], count);
    }

    return 0;
}
