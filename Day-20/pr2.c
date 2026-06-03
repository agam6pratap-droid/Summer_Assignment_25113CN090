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
   
    int isSymmetric = 1;
    for(i=0; i<n; i++) {
        for(j=0; j<m; j++) {
            if(a[i][j] != a[j][i]) {
                isSymmetric = 0;
                break;
            }
        }
    }
    if(isSymmetric) {
        printf("The matrix is symmetric.\n");
    } else {
        printf("The matrix is not symmetric.\n");
    }
    return 0;
}