// WAP to add elements present in every row of a matrix & store it in an array
#include<stdio.h>
// function definition
int add(int (*pa)[5],int *pb)
{
    int a[4][5],b[4];
    pa=a;
    pb=b;
    int i,j;
     for(i=0;i<4;i++){
        b[i]=0;
        for(j=0;j<5;j++){
            b[i]+=a[i][j];
        }
     }
     printf("%d",b[i]);

}
int main()
{
    int A[4][5],B[4]={0,0,0,0};
    int x;
    printf("enter the elements of an array\n");
    for(int i=0;i<4;i++){
        for(int j=0;j<5;j++){
            scanf("%d",&A[i][j]);
        }
        printf("%d",add(A,B));
    }
}