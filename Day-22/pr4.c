#include<stdio.h>
int main () {
    int k=0;
    char st[32];
    printf("Enter the string (max 32): ");
    fgets(st, sizeof(st), stdin);

    for (int i = 0; st[i] != '\0'; i++) {
        if (st[i] != ' ') {
            st[k++] = st[i];
        }
    }
    st[k] = '\0';
    printf("String after removing spaces: %s\n", st);
    return 0;
}