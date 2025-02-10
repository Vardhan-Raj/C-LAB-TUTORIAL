// WAP to multiply a matrix with a scalar quantity
#include<stdio.h>
// main method 
int main(){
    int mat[3][4],scalar=8;
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            printf("Enter the value of %d row and %d column:\n",i,j);
            scanf("%d",&mat[i][j]);
        }
    }
    printf("original matrix is:\n");
    printf("\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            printf("%d  ",mat[i][j]);
        }
        printf("\n");
    }
    printf("\nThe required matrix after multiply by scalar is below:\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            printf("%d  ",scalar*mat[i][j]);
        }
        printf("\n");
    }

    return 0;
}