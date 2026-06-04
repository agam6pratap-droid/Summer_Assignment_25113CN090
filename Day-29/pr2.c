#include <stdio.h>

int main() {
    int arr[100], n, i, choice;
    int sum, largest, smallest, search, found;

    
    printf("    ARRAY OPERATION SYSTEM\n");
   

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

  
        printf("\n MENU \n");
        printf("1. Display Array\n");
        printf("2. Find Sum of Elements\n");
        printf("3. Find Largest Element\n");
        printf("4. Find Smallest Element\n");
        printf("5. Search an Element\n");
       

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {

            case 1:
                printf("Array Elements: ");
                for(i = 0; i < n; i++) {
                    printf("%d ", arr[i]);
                }
                printf("\n");
                break;

            case 2:
                sum = 0;
                for(i = 0; i < n; i++) {
                    sum += arr[i];
                }
                printf("Sum of all elements = %d\n", sum);
                break;

            case 3:
                largest = arr[0];
                for(i = 1; i < n; i++) {
                    if(arr[i] > largest) {
                        largest = arr[i];
                    }
                }
                printf("Largest element = %d\n", largest);
                break;

            case 4:
                smallest = arr[0];
                for(i = 1; i < n; i++) {
                    if(arr[i] < smallest) {
                        smallest = arr[i];
                    }
                }
                printf("Smallest element = %d\n", smallest);
                break;

            case 5:
                printf("Enter element to search: ");
                scanf("%d", &search);

                found = 0;
                for(i = 0; i < n; i++) {
                    if(arr[i] == search) {
                        printf("%d found at position %d\n", search, i + 1);
                        found = 1;
                        break;
                    }
                }

                if(found == 0) {
                    printf("%d not found in the array.\n", search);
                }
                break;

            

            default:
                printf("Invalid choice! Please try again.\n");
        }

    return 0;
}