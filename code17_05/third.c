// WAP to find out the sum of the two complex no. using structure
#include <stdio.h>
struct complex {
    float real;
    float imag;
};
int main(){
    struct complex a, b, c;
    printf("Enter the real and imaginary parts of the first complex number: ");
    scanf("%f %f", &a.real, &a.imag);
    printf("Enter the real and imaginary parts of the second complex number: ");
    scanf("%f %f", &b.real, &b.imag);
    c.real = a.real + b.real;
    c.imag = a.imag + b.imag;
    printf("The sum of the two complex numbers is: %.2f + %.2fi\n", c.real, c.imag);
    return 0;
}