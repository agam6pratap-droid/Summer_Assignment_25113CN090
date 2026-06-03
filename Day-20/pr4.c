#include<stdio.h>
int main () {
    int a[100][100],i,j,n,m,sum=0;
    printf("Enter the number of rows and columns: ");
    scanf("%d%d", &n, &m);
    printf("Enter the elements of the first matrix:\n");
    for(i=0; i<n; i++) {
        for(j=0; j<m; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    printf("The column wise sum is:\n");
    for (j = 0; j < m; j++)
    {
        sum = 0;
       for (i = 0; i < n; i++)
       {
           
           sum += a[i][j];
       }
       printf("Column %d: %d\n", j+1, sum);
    }
    
    
}