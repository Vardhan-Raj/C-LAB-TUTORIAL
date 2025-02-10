// WAP to find out the sum of the numbers stored in an array of integers
#include<stdio.h>
// main method
int main(){
    int n, sum=0;
    printf("Enter the value of array : ");
    scanf("\n%d", &n);
    int arr[n];
    for(int i=0;i<n;i++){
        printf("Enter the %d elements : ", i+1);
        scanf("\n%d", &arr[i]);
        sum+=arr[i];
    }
    printf("Teh sum of all elememts is %d\n", sum);
    return 0;
}