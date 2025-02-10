// WAP to multiply 2 matrices 
#include<stdio.h>
// #define i 2
// #define j 2
// #define m 2
// #define n 2
int main(){
    int i,j,m,n;
    printf("Enter the value of i and j\n");
    scanf("%d %d",&i,&j);
    printf("Enter the value of m and n\n");
    scanf("%d %d",&m,&n);
    if(i==n)
    {
        int a[i][j], b[m][n], c[i][n];
        for(int k=0; k<i; k++){
            for(int l=0; l<j; l++){
                scanf("%d", &a[k][l]);
            }
        }

        for(int k=0; k<m; k++){
            for(int l=0; l<n; l++){
                scanf("%d", &b[k][l]);
            }
        }
        //multiplying both the matrix
        for(int k=0;k<i;k++){
            for(int l=0;l<n;l++){
                c[k][l]=0;
                for(int o=0;o<m;o++){
                    c[k][l]+=a[k][o]*b[o][l];
                }
            }
        }
        for(int k=0; k<i; k++){
            for(int l=0; l<n; l++){
                printf("%d\t", c[k][l]);
            }
            printf("\n");
        }
    }
    else 
        printf("The row1 and column2 aren't equal so multiply doesn't exit\n ");
    return 0;
}