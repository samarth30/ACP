#include <stdio.h>
#include <stdlib.h>

void merge(int *a,int *b,int *c,int n,int m){
   int k=0,i=0,j=0;

   while(i<n && j<m){
     if(a[i] < b[i]){
        c[k++] = a[i++];
     }else{
        c[k++] = b[j++];
     }
   }
   while(i<n){
    c[k++] = a[i++];
   }
   while(j<m){
    c[k++] = b[j++];
   }
}

int main()
{
    int n;
    scanf("%d",&n);
    int i,a[n];

    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    int m;
    scanf("%d",&m);
    int temp,j,b[m];

    for(j=0;j<m;j++){
        scanf("%d",&b[j]);
    }

    int total = n+m;
    int c[total];
   merge(a,b,c,n,m);
     for(i=0;i<total;i++){
        for(j=i+1;j<total;j++){
            if(c[j] < c[i]){
            temp = c[i];
            c[i] = c[j];
            c[j] = temp;
           }
        }
    }

    for(j=0;j<total;j++){
        printf("%d ",c[j]);
    }
}
