// WAP to enter numbers in an array and accessing it by using pointer
#include<stdio.h>
// main method
int main(){
    int *ptr,n;
    printf("Enter the no. of element you wants to enetr\n");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        printf("Enter the %d element of the array\n", i+1);
        scanf("%d",&arr[i]);
    }
    ptr=arr;
    for(int i=0;i<n;i++){
        printf("%d\n",*(ptr+i));
        // printf("%d\n",arr[i]);
    }
    return 0;
}