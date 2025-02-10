// allocate & assign dynamically 2D array([n][5]) and find sum of all elements
#include<stdio.h>
#include<stdlib.h>
// main method
int main(){
    int n, (*ptr)[5], sum=0;
    printf("Enter teh no. of rows : ");
    scanf("\n%d", &n);
    ptr=(int (*)[5])malloc(n*5*sizeof(int));
    printf("Enter teh elements of that row :\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<5;j++){
            scanf("%d", *(ptr+i)+j);
            sum+=ptr[i][j];
        }
    }
    printf("Sum of all elements of 2D array is %d\n",sum);
    free(ptr);
    return 0;
}