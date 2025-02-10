#include<stdio.h>
//main method
int main()
{
    float a, b;
    int n;
    printf("Enter the floating point number: ");
    scanf("%f", &a);
    n=a;
    b=a-n;
    printf("Integral part: %d\n", n);
    return 0;
}