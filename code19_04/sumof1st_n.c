// WAP to find sum of first n integers of 2 arrays, return 0(equal sum), 1(1st array sum is larger) or 2(2nd array sum is larger)
#include<stdio.h>
int sumofArray(int a[], int b[], int n){
    int s1=0,s2=0;
    for(int i=0;i<n;i++){
        s1+=a[i];
        s2+=b[i];
    }
    if(s1==s2){
        return 0;
    }
    else if(s1>s2){
            return 1;
        }
    else 
        return 2;
}
// main method 
int main(){
    int x[10]={1,2,3,4,5,6,7,8,9,10}, y[10]={2,3,5,2,7,5,4,3,2,1};
    printf("If sumof both arrays are equal it returns 0, if sum of 1st array is greater it return 1, else sum of 2nd array is greater then it returns 2\n");
    printf("%d",sumofArray(x,y,10));
    return 0;
}