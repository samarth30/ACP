#include <stdio.h>
#include <stdlib.h>

void swap(int *a,int *b){
   int temp;
   temp = *a;
   *a = *b;
   *b = temp;
}

void selection(int a[],int n){

    int i,j,min;
    for(i=0;i<n-1;i++){
        min = i;

       for(j=i+1;j<n;j++){
        if(a[j]<a[min]){
            min = j;
        }
       }
        swap(&a[i],&a[min]);
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

    selection(a,n);

    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }

}
