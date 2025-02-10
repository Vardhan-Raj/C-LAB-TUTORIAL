// WAP to find all even no. prsent in the existing array, create a new array consisting of only those even numbers and display it
#include<stdio.h>
// main method
int main(){
    int n;
    printf("Enter the size of an array\n");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        printf("Enter the value of %d position in array\n",i);
        scanf("%d",&arr[i]);
    }
    int *ptr;
    ptr = arr;
    printf("The required array is :\n");
    printf("{");
    for(int i=0;i<n;i++){
        if(*ptr%2==0){
            printf("%d, \t",*ptr);
        }
        ptr++;
    }
    printf("\b\b\b\b\b\b}");
    return 0;
}