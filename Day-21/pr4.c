#include<stdio.h>
int main () {
    int i;
    char st[32];
    printf("Enter the string (max 32): ");
    scanf("%s", st);
    for(i=0; st[i]!='\0';i++)
    {
        if(st[i] >= 'a' && st[i] <= 'z') {
            st[i] = st[i] - 32;
        }
    }
    printf("Uppercase string is: %s\n", st);
    return 0;
}