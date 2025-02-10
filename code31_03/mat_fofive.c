#include<stdio.h>
// main method
int main(){
    int i,j,mat[4][5];
    for(i=0;i<4;i++){
        for(j=0;j<5;j++){
            printf("Enter the %d row and %d column\n",i,j);
            scanf("%d",&mat[i][j]);
        }
    }
    printf("The required matrix is below\n");
    for(i=0;i<4;i++){
        for(j=0;j<5;j++){
            printf("%d  ",mat[i][j]);
        }
        printf("\n");
    }
    return 0;
}