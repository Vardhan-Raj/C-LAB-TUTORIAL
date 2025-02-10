// WAP to find out the sum of the diagonal corner element of a matrix m x n
#include<stdio.h>
// main method
int main(){
    int i,j,sum1,sum2;
    printf("Enter the value of row and column\n");
    scanf("%d %d", &i, &j);
    int arr[i][j];
    for(int m=0;m<i;m++){
        for(int n=0;n<j;n++){
            printf("Enter the elements of %d row and %d column\n",m+1,n+1);
            scanf("%d",&arr[m][n]);
        }
    }
    for(int m=0;m<i;m++){
        for(int n=0;n<j;n++){
            sum1= arr[0][0]+arr[m][n];
            sum2= arr[0][n]+arr[m][0];
        }
    }
    printf("The sum of 1st diagonal corner is %d\n",sum1);
    printf("The sum of 2nd diagonal corner is %d\n",sum2);
    return 0;
}

// int main(){
//     int i,j;
//     printf("Enter the no. of rows and column\n");
//     scanf("%d%d", &i, &j);
//     int matrix[i][j];
//     for(int m=0;m<i;m++){
//         for(int n=0;n<j;n++){
//             printf("Enter the value of matrix[%d][%d]\n",m+1,n+1);
//             scanf("%d",&matrix[m][n]);
//         }
//     }
//     printf("The sum of corner element is %d\n",matrix[0][0]+matrix[i-1][j-1]);
//     printf("The sum of other corner element is %d\n",matrix[0][j-1]+matrix[i-1][0]);

//     return 0;
// }