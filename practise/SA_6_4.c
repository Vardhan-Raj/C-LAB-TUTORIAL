//  WAP to display the array elements in ascending order.
#include<stdio.h>
// main method
int main(){
    int n;
    printf("Enter the value of array : ");
    scanf("\n%d", &n);
    int arr[n], sort[n];
    for(int i=0;i<n;i++){
        printf("Enter the %d elements : ", i+1);
        scanf("\n%d", &arr[i]);
        
    }
    for(int i=0;i<n;i++){
        if(arr[i+1]<arr[i+2])
            sort[i]=arr[i+1];
        else
            sort[i]=arr[i+1];
    }
    
    printf("Teh given array in ascending order is below\n");
    for (int i=0; i<n; i++){
        printf("%d\t", sort[i]);
    }
    
    return 0;
}