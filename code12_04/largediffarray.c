// WAP to find the largest difference in an array, also find the no. of leaders
#include<stdio.h>
#include<limits.h>
// main method
int main(){
    int arr[10]={2,5,6,84,42,31,1,2,3,34},max=INT_MIN,min=INT_MAX;

    for(int i=0;i<10;i++){
        if(arr[i]>max)
            max=arr[i];
    }
    printf("The largest is %d\n",max);

    for(int i=0;i<10;i++){
        if(arr[i]<min)
            min=arr[i];
    }
    printf("The smallest is %d\n",min);
    printf("%d",max-min);
    return 0;
}