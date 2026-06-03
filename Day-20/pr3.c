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
    printf("The row wise sum is:\n");
    for (i = 0; i < n; i++)
    {
        sum = 0;
       for (j = 0; j < m; j++)
       {
           
           sum += a[i][j];
       }
       printf("Row %d: %d\n", i+1, sum);
    }
    
    
}