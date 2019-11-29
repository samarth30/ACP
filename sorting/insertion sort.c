#include <stdio.h>
#include <stdlib.h>

void swap(int *a,int *b){
   int temp;
   temp = *a;
   *a = *b;
   *b = temp;
}

void insertion(int a[],int n){

    int i,j,x;
    for(i=1;i<n-1;i++){
        x = a[i];
        j = i-1;

        while(j>=0 && a[j]>x){
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = x;
    }
}

int main()
{
    int n;
    scanf("%d",&n);
    int a[n],i;
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    insertion(a,n);

    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }

}
