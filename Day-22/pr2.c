#include<stdio.h>
int main () {
    int words = 0;
    char st[32];
    printf("Enter the sentence (max 32): ");
    fgets(st, sizeof(st), stdin);

    for(int i = 0; st[i] != '\0'; i++) {
        if(st[i] == ' ') {
            words++;
        }
    }
    words++;  // For the last word

    printf("Number of words: %d\n", words);
    return 0;
}