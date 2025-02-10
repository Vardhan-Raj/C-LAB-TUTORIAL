// WAP to read four data from the file and display the largest data
#include <stdio.h>

int main() {
    int a, b, c, d, largest;
    FILE *fp = fopen("data.txt", "r");
    if (fp == NULL){
        printf("Error opening file.\n");
        return 1;
    }
    fscanf(fp, "%d %d %d %d", &a, &b, &c, &d);
    largest = a;
    if (b > largest){
        largest = b;
    }
    if (c > largest){
        largest = c;
    }
    if (d > largest){
        largest = d;
    }
    fclose(fp);
    printf("The largest number is: %d\n", largest);
    return 0;
}