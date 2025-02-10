// WAP to find largest element stored in an array.
#include<stdio.h>
#include<limits.h>
// main method
int main(){
    int n, max= INT_MIN;
    printf("Enter the value of array : ");
    scanf("\n%d", &n);
    int arr[n];
    for(int i=0;i<n;i++){
        printf("Enter the %d elements : ", i+1);
        scanf("\n%d", &arr[i]);
        if(max<arr[i])
            max=arr[i];
    }
    printf("Teh largest elememts stored in an array is %d\n", max);
    return 0;
}