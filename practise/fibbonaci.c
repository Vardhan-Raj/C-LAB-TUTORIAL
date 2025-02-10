#include<stdio.h>
int fibbo(int n){
    if(n==1)
        return 0;
    else if(n==2)
        return 1;
    else
        return(fibbo(n-1)+fibbo(n-2));
    }
int main(){
    int a,fibbonaci;
    scanf("%d",&a);
    fibbonaci= fibbo(a);
    printf("%d\n",fibbonaci);
    return 0;
}