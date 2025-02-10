#include<stdio.h>
// main method 
int main(){
    int mat[4][4],mat_2[4][4];
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            printf("Enter the value of %d row and %d column:\n",i,j);
            scanf("%d",&mat[i][j]);
        }
    }
    printf("Enter the next matrix:\n\n");
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            printf("Enter the value of %d row and %d column:\n",i,j);
            scanf("%d",&mat_2[i][j]);
        }
    }
    // printf("\nThe required matrix after addition is below:\n");
    int add[4][4];
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            add[i][j]= mat[i][j]+mat_2[i][j];
        }
    }

    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            printf("%d  ",add[i][j]);
        }
        printf("\n");
    }
    return 0;
}