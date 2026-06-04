#include <stdio.h>
#include <string.h>

int main() {
    char str[100], str2[100];
    int choice;

    printf("   STRING OPERATION SYSTEM\n");
    

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

   
        printf("\n MENU \n");
        printf("1. Display String\n");
        printf("2. Find Length\n");
        printf("3. Copy String\n");
        printf("4. Concatenate String\n");
        printf("5. Compare Strings\n");
        printf("6. Reverse String\n");
      

        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar();

        switch(choice) {

            case 1:
                printf("String: %s", str);
                break;

            case 2:
                printf("Length of string = %lu\n", strlen(str) - 1);
                break;

            case 3:
                strcpy(str2, str);
                printf("Copied String: %s", str2);
                break;

            case 4:
                printf("Enter another string: ");
                fgets(str2, sizeof(str2), stdin);

                str2[strcspn(str2, "\n")] = '\0';
                str[strcspn(str, "\n")] = '\0';

                strcat(str, str2);
                printf("Concatenated String: %s\n", str);
                break;

            case 5:
                printf("Enter another string: ");
                fgets(str2, sizeof(str2), stdin);

                if(strcmp(str, str2) == 0)
                    printf("Both strings are equal.\n");
                else
                    printf("Strings are not equal.\n");
                break;

            case 6: {
                int i, len;
                char temp[100];

                len = strlen(str);
                if(str[len - 1] == '\n')
                    len--;

                for(i = 0; i < len; i++) {
                    temp[i] = str[len - i - 1];
                }
                temp[len] = '\0';

                printf("Reversed String: %s\n", temp);
                break;
            }

            
            default:
                printf("Invalid choice! Please try again.\n");
        }

  

    return 0;
}