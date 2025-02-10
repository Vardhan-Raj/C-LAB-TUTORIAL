// given the binary array, find the position where largest number of consecutive 1's are present
#include<stdio.h>
#include<stdlib.h>
// main method
int main(){
    int n, *data, new_pos=0, old_pos=-1, old_count=0, new_count=0;
    printf("Enter the number of elements\n");
    scanf("%d",&n);
    data = (int *)malloc(n*sizeof(float));
    printf("Enter the data\n");
    for(int i=0;i<n;i++){
        scanf("%d",(data+i));
        if(*(data+i) == 1){
            old_count = new_count;
            
        }
    }
    return 0;
}