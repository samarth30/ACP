#include <stdio.h>
#include <stdlib.h>

void reverse(int *a,int n){
     int i,j;
     int temp;
     for(i=0,j=n-1;i<n/2;i++,j--){
        temp = a[i];
        a[i] = a[j];
        a[j] = temp;
     }

}

int main()
{
    int n;
    scanf("%d",&n);
    int i,arr[n];

    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    reverse(arr,n);


     for(i=0;i<n;i++){
        printf("%d",arr[i]);
    }

}
