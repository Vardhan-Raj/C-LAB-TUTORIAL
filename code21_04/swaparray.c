// WAP to swap the array element using pointer without using third variable as following manner A(0)=A(n), A(1)=A(n-1),....
#include <stdio.h>
// main method
int main() {
    int a[6];
    int *p = a;
    int c = 5;

    for(int i=0; i<6; i++) {
        scanf("%d", &a[i]);
    }

    for(int i = 0; i < 3; i++) {
        *(p + i) = *(p + i) + *(p + c);
        *(p + c) = *(p + i) - *(p + c);
        *(p + i) = *(p + i) - *(p + c);
        c--;
    }

    printf("After swapping array elements\n");
    for(int i=0; i<6; i++) {
        printf("%d ", a[i]);
    }
    return 0;
}