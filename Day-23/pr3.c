#include <stdio.h>
#include <string.h>

int main() {
    char str1[50], str2[50], temp;
    int i, j;

    printf("Enter first string: ");
    scanf("%s", str1);

    printf("Enter second string: ");
    scanf("%s", str2);

    if(strlen(str1) != strlen(str2)) {
        printf("Not Anagram\n");
        return 0;
    }

    
    for(i = 0; str1[i] != '\0'; i++) {
        for(j = i + 1; str1[j] != '\0'; j++) {
            if(str1[i] > str1[j]) {
                temp = str1[i];
                str1[i] = str1[j];
                str1[j] = temp;
            }
        }
    }

    for(i = 0; str2[i] != '\0'; i++) {
        for(j = i + 1; str2[j] != '\0'; j++) {
            if(str2[i] > str2[j]) {
                temp = str2[i];
                str2[i] = str2[j];
                str2[j] = temp;
            }
        }
    }

    if(strcmp(str1, str2) == 0)
        printf("Anagram\n");
    else
        printf("Not Anagram\n");

    return 0;
}