#include<stdio.h>
// main method 
int main(){
    int i,a[20];
    for(i=0;i<20;i++){
        printf("Enter the next values:\n");
        scanf("%d",&a[i]);
    }
    printf("\n\nThe positives no.s are:\n");
    for(i=0;i<20;i++){
        if(a[i]>0)
        {
            printf("%d\n",a[i]);
        }
    }
    printf("\n\nThe negative no.s are:\n");
    for(i=0;i<20;i++){
        if(a[i]<0)
        {
            printf("%d\n",a[i]);
        }
    }
    printf("\n\nThe even no.s are:\n");
    for(i=0;i<20;i++){
        if(a[i]%2==0)
        {
            printf("%d\n",a[i]);
        }
    }
    printf("\n\nThe odd no.s are:\n");
    for(i=0;i<20;i++){
        if(a[i]%2==1)
        {
            printf("%d\n",a[i]);
        }
    }
    return 0;
}