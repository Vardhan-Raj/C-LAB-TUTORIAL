// WAP to display the lower triangular matrix
#include<stdio.h>
// main method 
int main(){
    int i,j;
    printf("Enter the value of row and column\n");
    scanf("%d%d",&i, &j);
    int arr[i][j];
    for(int m=0;m<i;m++){
        for(int n=0;n<j;n++){
            printf("Enter the element of arr[%d][%d]\n",m+1,n+1);
            scanf("%d",&arr[m][n]);
        }
    }
    
    for(int m=0;m<i;m++){
        for(int n=0;n<j;n++){
            if(m>=n){
                printf("%d\t",arr[m][n]);
            }
            else
                printf("\t");
        }
        printf("\n");
    }
    return 0;
}