#include<stdio.h>
int main(){
    int t;
    scanf("%d", &t);  // Number of test cases
    
    while(t--){
        int n;
        scanf("%d", &n);
        int arr[n];
        
        // Input array elements
        for(int i = 0; i < n; i++){
            scanf("%d", &arr[i]);
        }
        
        // Initialize with first possible sum
        int smallestSum = arr[0] + arr[1] + 1 - 0;
        
        // Find smallest possible sum of Ai + Aj + j - i
        for(int i = 0; i < n-1; i++){
            for(int j = i+1; j < n; j++){
                int currentSum = arr[i] + arr[j] + (j - i);
                if(currentSum < smallestSum){
                    smallestSum = currentSum;
                }
            }
        }
        
        printf("%d\n smallestSum: ", smallestSum);
    }
    
    return 0;
}