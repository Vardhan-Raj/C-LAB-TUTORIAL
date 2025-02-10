// WAP to define 2 structure, one structure is nested within another structure
#include<stdio.h>
struct details{
    char address[50];
    long long int ph_num;
    int pincode;
};
struct emp{
    char name[20];
    struct details person;
};
// main method
int main(){
    struct emp emp1;
    scanf("%s %s %lld %d",emp1.name, emp1.person.address, &emp1.person.ph_num, &emp1.person.pincode );
    printf("The information of that person is\n");
    printf("%s %s %lld %d",emp1.name, emp1.person.address, emp1.person.ph_num, emp1.person.pincode );
    return 0;
}