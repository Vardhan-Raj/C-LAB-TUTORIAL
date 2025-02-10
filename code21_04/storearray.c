// WAP to store the array value and print using pointer without third variable and second array as following manner
#include <stdio.h>
// main method
int main()
{
    int n;
    printf("Enter value of n\n");
    scanf("%d",&n);
    int a[n];
    int *ptr=a;
    int b[n];
    int *ptr1=b;
    
    for(int i=0;i<n;i++){
        printf("Enter array %d elemtents\n",i+1);
        scanf("%d",&(*(ptr+i)));
    }
    
    for(int i=0;i<n;i++){
        if(i==0)
            *(ptr1+i)=*(ptr+i);
        else
            *(ptr1+i)=*(ptr+i)+*(ptr+i-1);
    }
    printf("The required second array is\n");
    for(int i=0;i<n;i++){
        printf("%d\t",*(ptr1+i));
    }
    return 0;
}