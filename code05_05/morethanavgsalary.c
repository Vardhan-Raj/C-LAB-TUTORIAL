// WAP to display only those employee whose salary is more than average salary
#include<stdio.h>
#include<string.h>
// structure decleration
struct employee
{
    float salary;
    int age;
    char address[50];
    char name[20];
};
// main method
int main(){
    struct employee person[3];
    for(int i=0;i<3;i++){
        printf("Enter the details of employee: %d\n", i+1);
        scanf("%f %d", &person[i].salary, &person[i].age);
        scanf("%s %s",person[i].address, person[i].name);
    }
    float avg=0;
    for(int i=0;i<3;i++){
        avg+=person[i].salary;
    }
    avg= avg/3;
    printf("The person whose salary is more than average salary are\n");
    for(int i=0;i<3;i++){
        if(person[i].salary>avg)
            printf("%s\n", person[i].name);
    }
    return 0;
}