#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Frist array is: ");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("Enter the index and value: ");
    int indx;
    scanf("%d",&indx);
    for(int i=indx; i < n; i++){
        arr[i] = arr[i+1];
    }
    printf("Final array is: ");
    for(int i=0;i<n-1;i++){
        printf("%d ",arr[i]); 
    }
    return 0;
}