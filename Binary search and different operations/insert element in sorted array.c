#include <stdio.h>
#include <stdlib.h>

void insert(int a[],int n,int num){
  int i,temp,pos;
  for(i=0;i<n;i++){
    if(num <= a[i] && num > a[i-1]){
        pos = i;
        break;
    }
  }
  for(i=n;i>=pos+1;i--){
     a[i] = a[i-1];
  }
  a[pos] =  num;
}

int main()
{
   int n;
    scanf("%d",&n);
    int i,a[n];

    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int temp,j;
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
           if(a[j] < a[i]){
            temp = a[i];
            a[i] = a[j];
            a[j] = temp;
           }
        }
    }
    int num;
     scanf("%d",&num);
     insert(a,n+1,num);

    for(i=0;i<n+1;i++){
        printf("%d ",a[i]);
    }



}
