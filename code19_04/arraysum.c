// WAP to find sum of all element of the array using pointer variable
#include<stdio.h>
// main method 
int main(){
    int arr[5]={1,2,3,4,5},sum=0;
    int *ptr;
    ptr=arr;
    for(int i=0;i<5;i++){
        sum+=*(ptr+i);
    }
    printf("The sum of all the array is %d\n",sum);
    return 0;
}