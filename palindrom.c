#include<stdio.h>
int main(){
   int n;
   scanf("%d",&n);
   int arr[n];
   for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
   }

   int newArr[n];
   for(int i=0;i<n;i++){
    newArr[i] = arr[i];
   }
   
   printf("input array is: ");
   for(int i=0;i<n;i++){
       printf("%d ", newArr[i]);
   }  
   
   int i = 0;
   int j = n - 1;
   while(i < j){
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
    i++;
    j--;
   }

   printf("\nreverse array is: ");
   for(int i=0;i<n;i++){
       printf("%d ", arr[i]);
   }
   
   int conut = 0;
   for(int i=0;i<n;i++){
    if(arr[i] == newArr[i]){
        conut++;
    }
   }
   printf("\noutput array is: ");
   if(conut == n){
    printf("Palindrome");
   }else{
    printf("Not Palindrome");
   }

   
    return 0;
}