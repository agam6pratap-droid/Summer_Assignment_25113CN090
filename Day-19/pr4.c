#include<stdio.h>
int main () {
    int a[100][100],i,j,n,m;
    printf("Enter the number of rows and columns: ");
    scanf("%d%d", &n, &m);
    printf("Enter the elements of the first matrix:\n");
    for(i=0; i<n; i++) {
        for(j=0; j<m; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    int sum = 0;
    for(i=0; i<n; i++) {
        for(j=0; j<m; j++) {
            if(i == j) {
                sum += a[i][j];
            }
        }
    }
    printf("The sum of the diagonal elements is: %d\n", sum);
    return 0;
}