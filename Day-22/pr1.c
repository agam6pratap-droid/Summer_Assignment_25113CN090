#include <stdio.h>
#include <string.h>

int main() {
    char st[32];
    int i, len, flag = 1;

    printf("Enter a string: ");
    scanf("%s", st);

    len = strlen(st);

    for(i = 0; i < len/2; i++) {
        if(st[i] != st[len - i - 1]) {
            flag = 0;
            break;
        }
    }

    if(flag)
        printf("Palindrome\n");
    else
        printf("Not Palindrome\n");

    return 0;
}