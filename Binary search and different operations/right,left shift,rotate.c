#include <stdio.h>
#include <stdlib.h>

void rightShift(int *a,int n){
   int i,j,temp;
   for(i=n-1;i>=1;i--){
      a[i] = a[i-1];
   }
   a[0] = 0;
}

void rightRotate(int *a,int n,int t){
   int i,j,temp;
  while(t--){
    temp= a[n-1];
   for(i=n-1;i>=1;i--){
      a[i] = a[i-1];
   }
   a[0] = temp;
   }
}

void leftShift(int *a,int n){
   int i,j,temp;
   for(i=0;i<n-1;i++){
      a[i] = a[i+1];
   }
   a[n-1] = 0;
}

void leftRotate(int *a,int n,int t){
   int i,j,temp;
   while(t--){
    temp = a[0];
   for(i=0;i<n-1;i++){
      a[i] = a[i+1];
   }
   a[n-1] = temp;
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
    int t;
     scanf("%d",&t);

    leftRotate(a,n,t);

    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }


}
