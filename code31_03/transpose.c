#include<stdio.h>
int main(){
    int i,j,mat[4][4],temp;
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            printf("Enter the value of %d row an %d column\n",i,j);
            scanf("%d",&mat[i][j]);
        }
    }
    printf("original matrix:\n");
    printf("\n");
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            printf("%d  ",mat[i][j]);
        }
        printf("\n");
    }
    // for(i=0;i<4;i++){
    //     for(j=0;j<4;j++){
    //         temp= mat[i][j];
    //         mat[i][j]=mat[j][i];
    //         mat[j][i]= temp;
    //     }
    // }
    printf("The transpose matrix is:\n");
    printf("\n");
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            printf("%d  ",mat[i][j]);
        }
        printf("\n");
    }
    return 0;
}