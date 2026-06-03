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
    printf("The transpose of the matrix is:\n");
    for(j=0; j<m; j++) {
        for(i=0; i<n; i++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    return 0;
}