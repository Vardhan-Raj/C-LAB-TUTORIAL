// // WAP to multiply two matrices and display it
// #include<stdio.h>
// // main method
// int main(){
//     int m,n,p,q;
//     printf("Enetr the value of row and column of 1st matrix\n");
//     scanf("%d %d", &m, &n);
//     printf("Enetr the value of row and column of 2nd matrix\n");
//     scanf("%d %d", &p, &q);
//     if(m==q){
//         int mat[m][n], mat2[p][q], multiple[m][q];
//         for(int i=0;i<m;i++){
//             for(int j=0;j<n;j++){
//                 scanf("%d", &mat[i][j]);
//             }
//         }
//         for(int i=0;i<p;i++){
//             for(int j=0;j<q;j++){
//                 scanf("%d", &mat2[i][j]);
//             }
//         }
//         for(int i=0;i<m;i++){
//             for(int j=0;j<q;j++){
//                 multiple[i][j]=0;
//                 for(int k=0;k<m;k++){
//                     multiple[i][j]+=mat[i][k]*mat2[k][j];
//                 }
//             }
//         }
//         for(int i=0;i<m;i++){
//             for(int j=0;j<q;j++){
//                 printf("%d ", multiple[i][j]);
//             }
//             printf("\n");
//         }

//     }
//     else 
//         printf("Meultiplication not possible\n");

//     return 0;
// }

// // palindrome program
// #include<stdio.h>
// #include<string.h>
// void revstr(char *str1){
//     int temp, len;
//     len= strlen(str1);
//     for(int i=0;i<len/2;i++){
//         temp =  str1[i];
//         str1[i]= str1[len -i -1];
//         str1[len -i -1]= temp;
//     }
// }
// // main method
// void main(void){
//     printf("Enetr the size of name and do +1\n");
//     // int size;
//     // scanf("%d", &size);
//     char str1[50];
//     printf("Enetr the name \n");
//     gets(str1);
//     // int length = strlen(size);
//     revstr(str1);
//     printf("The name after reversing is %s\n", str1 );
// }

// #include<stdio.h>
// // function
// int amount(int a){
//     int total_amount;
//     total_amount= a + a*0.1;
//     return total_amount;
// }
// int main(){
//     int arr[12], sum=0;
//     for(int i=0;i<12;i++){
//         scanf("%d", &arr[i]);
//         sum+=arr[i];
//     }
//     int total;
//     total = amount(sum);
//     printf("Teh total amount is %d\n", total);
//     return 0;
// }

#include<stdio.h>
int main(){
    int arr[12];
    int *ptr=arr;
    for(int i=0;i<12;i++){
        scanf("%d", &ptr[i]);//ptr+i
    }&*ptr
    for(int i=0;i<12;i+=2){
        printf("%u\n", &ptr[i]);
    }
    return 0;
}