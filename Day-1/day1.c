#include<stdio.h>
int main(){
    int n,sum;
    sum=0;
    printf("Enter a number");
    scanf("%d",&n);
    for(int i=1;i<=n;i++) {
        sum=sum + i;
    }
    printf("The sum of N natural number is %d",sum);
    return 0;
}