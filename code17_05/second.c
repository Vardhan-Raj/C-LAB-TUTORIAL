// WAP to display the grade details of 50 of B-18 using structure
#include <stdio.h>
struct student{    
  char name[50];
  int roll_number;
  float grade;
};
// print function decleration
void print_student(struct student student){
  printf("Name: %s\n", student.name);
  printf("Roll number: %d\n", student.roll_number);
  printf("Grade: %.2f\n", student.grade);
}
// main method
int main(){
  struct student students[50];
  // start taking input
  for (int i = 0; i < 50; i++) {
    printf("Enter the name of student %d: ", i+1);
    fgets(students[i].name, 50, stdin);
    printf("Enter the roll number of student %d: ", i+1);
    scanf("%d", &students[i].roll_number);
    printf("Enter the grade of student %d: ", i+1);
    scanf("%f", &students[i].grade);
  } 
  // output using function
  printf("The grade details of 50 students of B-18 are:\n");
  for (int i = 0; i < 50; i++) {
    print_student(students[i]);
  }
  return 0;
}