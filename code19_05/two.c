// WAP to read contents of a file, store it onto an array and find sum of the elements
#include <stdio.h>
#include<stdlib.h>
// main method
int main(){
    int num, sum=0;
    int *arr;
    printf("Enter the number of elements in the file: ");
    scanf("%d", &num);
    arr = (int *)malloc(num * sizeof(int));
    FILE *fp = fopen("data2.txt", "r");
    if(fp == NULL){
        printf("Error opening file.\n");
        return 1;
    }
    // Read the elements from the file into the arr
    for(int i=0;i<num;i++){
        fscanf(fp, "%d", &arr[i]);
    }
    fclose(fp);
    for(int i = 0; i < num; i++){
        sum += arr[i];
    }
    printf("The sum of the elements is: %d\n", sum);
    free(arr);
    return 0;
}