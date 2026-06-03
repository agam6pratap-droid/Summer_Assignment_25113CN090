#include<stdio.h>
int main () {
    int a[100][100],b[100][100],c[100][100],i,j,n,m;
    printf("Enter the number of rows and columns: ");
    scanf("%d%d", &n, &m);
    printf("Enter the elements of the first matrix:\n");
    for(i=0; i<n; i++) {
        for(j=0; j<m; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Enter the elements of the second matrix:\n");
    for(i=0; i<n; i++) {
        for(j=0; j<m; j++) {
            scanf("%d", &b[i][j]);
        }
    }
    printf("The difference of the two matrices is:\n");
    for(i=0; i<n; i++) {
        for(j=0; j<m; j++) {
            c[i][j] = a[i][j] - b[i][j];
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }
    return 0;
}