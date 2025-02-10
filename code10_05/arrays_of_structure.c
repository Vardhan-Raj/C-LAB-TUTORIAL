// WAP to stoer elements in array of structure using pointer accessing printing
#include<stdio.h>
struct book{
    char name[25];
    char author[20];
    float price;
};
// main method
int main(){
    struct book *ptr, b[3];
    ptr = b;
    for(int i=0;i<3;i++){
        scanf("%s %s %f",(ptr+i)->name, (ptr+i)->author, &(ptr+i)->price);
    }
    printf("The following input are\n");
    for(int i=0;i<3;i++){
        printf("%s %s %f\n",(ptr+i)->name, (ptr+i)->author, (ptr+i)->price);
    }
    return 0;
}