// Find the largest and store it in the 0th position
#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
// main method
int main(){
    int *ptr, n, max=INT_MIN;
    printf("Enter the no. of elements : ");
    scanf("\n%d",&n);
    ptr=(int *)calloc(n, sizeof(float));
    for(int i=0;i<n;i++){
        scanf("%d",(ptr+i));
        if(max<*(ptr+i))
            max=*(ptr+i);
    }
    int pos;
    printf("enter the position you want to store the largest\n");
    scanf("%d", &pos);
    int temp= *(ptr+pos);
    *(ptr+pos)=max;
    *(ptr+(n-1))= temp;
    for(int i=0;i<n;i++){
        printf("%d\n",*(ptr+i));
    }
    free(ptr);
    return 0;
}
