#include<stdio.h>
int main () {
    int length;
    char st[32];
    printf("Enter the string (max 32): ");
    scanf("%s", st);

    for(length=0; st[length]!='\0'; length++);

    printf("Length of the string is: %d\n", length);
    return 0;
}