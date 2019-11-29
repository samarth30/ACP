#include <stdio.h>
#include <stdlib.h>

void swap(int *a,int *b){
   int temp;
   temp = *a;
   *a = *b;
   *b = temp;
}

void bubble(int a[],int n){

    int i,j,flag;
    for(i=0;i<n-1;i++){
            flag = 0;
        for(j=0;j<n-1-i;j++){
            if(a[j] > a[j+1]){
                flag = 1;
                swap(&a[j],&a[j+1]);
            }
        }
       if(flag == 0){
        break;
       }
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

    bubble(a,n);

    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }

}
