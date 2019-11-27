#include <stdio.h>
#include <stdlib.h>

int Iterations(int arr[],int l,int h,int key){
   int mid,i=0;
   while(l<=h){
    mid = (l+h)/2;
    if(key == arr[mid]){
        i++;
        return i;
    }else if(key <= arr[mid]){
        i++;
        h = mid-1;
    }
    else{
        i++;
        l = mid+1;
    }
   }
   return -1;
}

int Binary(int arr[],int l,int h,int key){
   int mid;
   if(l<=h){
    mid = (l+h)/2;
    if(key == arr[mid]){
        return mid;
    }else if(key <= arr[mid]){
        h = mid-1;
        return Binary(arr,l,h,key);
    }
    else{
        l = mid+1;
        return Binary(arr,l,h,key);
    }
   }
   return -1;
}

int pBinary(int *arr,int *low,int *high,int *keys){
   int mid;
   int l = *low;
   int h = *high;
   int key = *keys;
   while(l<=h){
    mid = (l+h)/2;
    if(key == arr[mid]){
        return mid;
    }else if(key <= arr[mid]){
        h = mid-1;
    }
    else{
        l = mid+1;
    }
   }
   return -1;
}

int main()
{
    int n;
    scanf("%d",&n);
    int i,arr[n];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    int key;
    scanf("%d",&key);
    int l=0;
    int h = n-1;
    int result = pBinary(arr,&l,&h,&key);

    printf("the position is %d",result);
}
