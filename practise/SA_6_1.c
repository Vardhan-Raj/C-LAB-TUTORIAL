// WAP to create an array that can store max. 50 integers and display the contents of the array
#include<stdio.h>
// main method
int main(){
    int arr[50];
    printf("Enter the elements in array max to max 50\n");
    for(int i=0;i<50;i++){
        printf("enter the %d element : ",i+1);
        scanf("\n%d", &arr[i]);
    }
    printf("the number you entered are\n");
    for(int i=0;i<50;i++){
        printf("%d\t", arr[i]);
    }
    return 0;
}