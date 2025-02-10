// Allocate n elements dynamically to a pointer variable, assign data find sum of all n elements using pointer variable
#include<stdio.h>
#include<stdlib.h>
// main method
int main(){
    int n, *ptr,sum=0;
    printf("Enter the value of n :");
    scanf("\n%d", &n);
    ptr = (int *)malloc(n*sizeof(int));
    for(int i=0; i<n; i++){
        scanf("%d", ptr+i);
        sum+=*(ptr+i);
    }
    printf("Sum=%d\n",sum);
    free(ptr);
    return 0;
}