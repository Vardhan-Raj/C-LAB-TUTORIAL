// WAP to write contents of an array to file
#include <stdio.h>
// main method
int main() {
    int num;
    printf("Enter the number of elements you want to put in array file\n");
    scanf("%d", &num);
    int array[num];
    for(int i=0;i<num;i++){
        printf("Enter the %d elements : ", i+1);
        scanf("%d", &array[i]);
    }
    FILE *fptr = fopen("array.txt", "w");
    for(int i=0;i<num;i++){
        fprintf(fptr, "%d\n", array[i]);
    }
    fclose(fptr);
    return 0;
}