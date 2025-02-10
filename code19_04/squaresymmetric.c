// WAP to find out that the square matrix is symmetric or not
#include<stdio.h>
// main method
int main(){
    int m,n;
    printf("Enter the value of row and column\n");
    scanf("%d %d",&m,&n);
    if(m==n){
        int mat[m][n],c[m][n],temp;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                scanf("%d",&mat[i][j]);
            }
        }
        // // creating square of matrix
        // for(int i=0;i<m;i++){
        //     for(int j=0;j<n;j++){
        //         c[i][j]=0;
        //         for(int k=0;k<m;k++){
        //             c[i][j]+=mat[i][k]*mat[k][j];
        //         }
        //     }
        // }
        // // printing the square matrix
        // for(int i=0;i<m;i++){
        //     for(int j=0;j<n;j++){
        //         printf("%d\t",c[i][j]);
        //     }
        //     printf("\n");
        // }
        
        // transpose of a matrix
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                temp= mat[i][j];
                mat[i][j]=mat[j][i];
                mat[j][i]=temp;
            }
        }
        // check for symmetricity
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(mat[i][j]==temp){
                    printf("The given matrix is symmetric\n");
                }
            }
        }

    } else 
        printf("The entered matrix is not a square matrix\nfuck up\n");
    return 0;
}