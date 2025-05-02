#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]); 
    }
    printf("First inserted array is: ");
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    printf("\nEnter the index and value to insert: ");
    int indx, val;
    scanf("%d %d", &indx, &val);
    for(int i = n; i> indx; i--){
        arr[i] = arr[i-1];
    }

    arr[indx] = val;
    printf("The array after inserting the element is: ");
    for(int i = 0; i <= n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}