#include<stdio.h>
int main() {
    int a[100],mid,beg,end,n,i,ele;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter %d elements: ", n);
    for(i=0; i<n; i++) {
        scanf("%d", &a[i]);
    }
    printf("Enter the element to search: ");
    scanf("%d", &ele);
    beg=0;
    end=n-1;
    mid=(beg+end)/2;
    while(beg<=end) {
        if(a[mid]==ele) {
            printf("Element found at index %d\n", mid);
            return 0;
        }
        else if(a[mid]<ele) {
            beg=mid+1;
        }
        else {
            end=mid-1;
        }
        mid=(beg+end)/2;
    }
    printf("Element not found\n");
    return 0;
}