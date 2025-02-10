// WAP to pass a structure student to function using call by address and display the details of student.
#include <stdio.h>
// Define the structure for student details
struct Student {
    char name[50];
    int age;
    float marks;
};
// Function to display the details of a student
void displayStudentDetails(struct Student* student) {
    printf("Name: %s\n", student->name);
    printf("Age: %d\n", student->age);
    printf("Marks: %.2f\n", student->marks);
}
// main method
int main() {
    // Declare a structure variable
    struct Student student1;

    // Get the details of the student from the user
    printf("Enter student details:\n");
    printf("Name: ");
    fgets(student1.name, sizeof(student1.name), stdin);
    printf("Age: ");
    scanf("%d", &student1.age);
    printf("Marks: ");
    scanf("%f", &student1.marks);

    // Pass the address of the structure to the displayStudentDetails function
    displayStudentDetails(&student1);

    return 0;
}