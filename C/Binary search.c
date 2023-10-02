//BINARY SEARCH OF A SORTED ARRAY

#include <stdio.h>
int main() {
    int a[] = {3,4,7,9,10,14};
    int n=6,k=10;
    int low=0,high=n-1,pos=-1;
    while (low <= high) {
        int mid=low+(high-low)/2;
        if(a[mid]==k) {
            pos=mid;
            break; 
        }
        else if(a[mid]<k) {
            low=mid+1; 
        } 
        else 
        {
            high=mid-1; 
        }
    }

    if (pos!=-1) {
        printf("Element %d found at index %d\n", k,pos);
    } else {
        printf("Element %d not found in the array\n",k);
    }

    return 0;
}