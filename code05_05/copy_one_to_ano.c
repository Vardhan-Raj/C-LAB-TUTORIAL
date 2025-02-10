// WAP with structure, and copy one information to another
#include<stdio.h>
#include<string.h>
// structure decleration
struct employee
{
    float salary;
    int age;
    char name[20];
};
// main method
int main(){
    struct employee e1={49000,21,"Vardhan_Raj"};
    struct employee e2;
    e2.age=e1.age;
    e2.salary=e1.salary;
    strcpy(e2.name, e1.name);
    printf("The information copied to another employee is\n");
    printf("%.2f  %d  %s\n",e2.salary, e2.age, e2.name);
    return 0;
}