#include<stdio.h>
int main(){
   int n;
   scanf("%d",&n);
   int arr[n];
   printf("Enter the array elements: ");
   for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
   }

   int a=0, b=n-1;
   for(int i=0;i<n;i++){
     if(a < b){
        int temp = arr[a];
        arr[a] = arr[b];
        arr[b] = temp;
        a++;
        b--;
     }
   }

   printf("New array: ");
   for(int i=0;i<n;i++){
    printf("%d ",arr[i]);
   }


    return 0;
}