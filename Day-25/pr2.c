#include <stdio.h>
int main() {
    char str1[100],str2[100];
    int i, j, k;

    printf("Enter a string1: ");
    scanf("%s", str1);
    printf("Enter a string2: ");
    scanf("%s", str2);
    printf("Common characters: ");
   for(i=0; str1[i]!='\0'; i++)
   {
       for(j=0; str2[j]!='\0'; j++)
       {
           if(str1[i]==str2[j]) {
            printf("%c", str1[i]);
            break;
           }
          
   }
}
   return 0;
}