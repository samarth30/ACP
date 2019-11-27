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
    int temp,j,b[m],d[m];

    for(j=0;j<m;j++){
        scanf("%d",&b[j]);
    }
    for(j=0;j<m;j++){
       d[j] = b[j];
    }
    int t;
    if(n<m){
        t = n;
    }else{
        t= m;
     }

    int f[t];

    int l=0;
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            if(a[i] == b[j]){
              f[l++] = a[i];
            }
        }
    }

    for(i=0;i<l;i++){
        printf("%d ",f[i]);
    }
    printf("\n");
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
        for(i=j+1;i<total;i++){
          if(c[j] == c[i]){
            c[i] = -1;
          }
        }
    }

    for(j=0;j<total;j++){
        if(c[j] != -1){
       printf("%d ",c[j]);
    }
  }
}
