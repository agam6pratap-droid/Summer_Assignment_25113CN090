#include<stdio.h>
int main () {
    int i, j;
    char st[32], reverse[32];
    printf("Enter the string (max 32): ");
    scanf("%s", st);

    for(i=0; st[i]!='\0'; i++) {
    for(j=0; i>0; i--, j++)
    {
        reverse[j] = st[i-1];
    }
    reverse[j] = '\0';
    }
    printf("Reversed string is: %s\n", reverse);
    return 0;
}