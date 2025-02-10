// WAP to find both largest and smallest, display largest difference
#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
// main method
int main(){
    int *ptr, n, min=INT_MAX, max=INT_MIN;
    printf("Enter the no. of elements : ");
    scanf("\n%d",&n);
    ptr=(int *)calloc(n, sizeof(float));
    for(int i=0;i<n;i++){
        scanf("%d",(ptr+i));
        if(max<*(ptr+i))
            max=*(ptr+i);
        if(min>*(ptr+i))
            min=*(ptr+i);
    }
    int difference = max-min;
    printf("%d\n",difference);
    free(ptr);
    return 0;
}