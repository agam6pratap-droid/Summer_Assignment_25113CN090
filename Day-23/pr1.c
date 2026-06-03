#include<stdio.h>
int main () {
    int i, j,length,k=0;
    char st[32], nonrepeated[32];
    printf("Enter the string (max 32): ");
    fgets(st, sizeof(st), stdin);

    for (length = 0; st[length] != '\0'; length++);
    

    
    for (i = 0; i < length; i++) {
        for(j = 0; j < length; j++) {
            if (i != j && st[i] == st[j]) {
                break;
            }
        }
        if (j == length) { 
            nonrepeated[k++] = st[i];
        }
    }
    nonrepeated[k] = '\0';
    printf("Non-repeated characters: %s\n", nonrepeated);
    return 0;
}