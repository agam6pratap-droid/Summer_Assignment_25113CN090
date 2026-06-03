#include<stdio.h>
int main () {
    int vowels = 0, consonants = 0, i;
    char st[32];
    printf("Enter the string (max 32): ");
    scanf("%s", st);

    for(i=0; st[i]!='\0'; i++) {
        if(st[i]=='a' || st[i]=='e' || st[i]=='i' || st[i]=='o' || st[i]=='u' ||
           st[i]=='A' || st[i]=='E' || st[i]=='I' || st[i]=='O' || st[i]=='U') {
            vowels++;
        } else {
            consonants++;
        }
    }

    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);
    return 0;
}