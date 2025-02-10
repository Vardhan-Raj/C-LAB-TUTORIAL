// WAP to print the central element of a 3*3 matrix or 5*5 matrix
#include<stdio.h>
// main method
int main(){
    int i,j;
    printf("Enetr the no. of row and column\n");
    scanf("%d %d",&i,&j);
    int arr[i][j];
    for(int m=0;m<i;m++){
        for(int n=0;n<j;n++){
            printf("Enter the element of %d row and %d column of the matrix\n",m,n);
            scanf("%d",&arr[m][n]);
        }
    }
    if(i==3 && j==3){
        printf("%d",arr[1][1]);
    }
    else{
        printf("%d",arr[2][2]);
    }
    
    return 0;
}