// WAP to swap to variables by passing parameters (call by reference)
#include<stdio.h>
// function for swaping
void swap(int *x,int *y){
    int temp= *x;
    *x=*y;
    *y = temp;
}
// main method 
int main(){
    int a=10,b=20;
    swap(&a,&b);
    printf("After swapping the value of x is %d and y is %d\n",a,b);
    return 0;
}