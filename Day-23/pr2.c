#include<stdio.h>
int main () {
    int i, j,length,k=0;
    char st[32], repeated[32];
    printf("Enter the string (max 32): ");
    fgets(st, sizeof(st), stdin);

    for (length = 0; st[length] != '\0'; length++);

    for (i = 0; i < length; i++) {
        for(j = i+1; j < length; j++) {
            if (st[i] != '\0' && st[i] == st[j]) {
                repeated[k++] = st[i];
                break;
            }
        }
    }
    repeated[k] = '\0';
    printf("Repeated characters: %s\n", repeated);
    return 0;
}