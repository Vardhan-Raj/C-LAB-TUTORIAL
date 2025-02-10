// WAP to read n write from structure 
#include<stdio.h>
#include<string.h>
// structure definition
struct book
{
    float price;                                             // data members decleration
    char name[20];
    int pages;
};
// main method
int main(){
    struct book b1, b2;                                     // variable decleration
    printf("Enter  the information of book1\n");
    scanf("%f %s %d",&b1.price, b1.name, &b1.pages);
    printf("Enter  the information of book2\n");
    scanf("%f %s %d",&b2.price, b2.name, &b2.pages);
    printf("%f  %s  %d\n",b1.price, b1.name, b1.pages);
    printf("%f  %s  %d\n",b2.price, b2.name, b2.pages);
    return 0;
}

