#include<stdio.h>
int main () {
    int i,charfreq[26] = {0};
    char st[32];
    printf("Enter the string (max 32): ");
    scanf("%s", st);

    for(i = 0; st[i] != '\0'; i++) {
        if(st[i] >= 'a' && st[i] <= 'z') {
            charfreq[st[i] - 'a']++;
        } else if(st[i] >= 'A' && st[i] <= 'Z') {
            charfreq[st[i] - 'A']++;
        }
    }

    printf("Character frequencies:\n");
    for(i = 0; i < 26; i++) {
        if(charfreq[i] > 0) {
            printf("%c: %d\n", i + 'a', charfreq[i]);
        }
    }

    return 0;
}