#include <stdio.h>
//function
void addTwenty(int arr[], int size){
    for (int i = 0; i < size; i++) {
        arr[i]+=20;
    }
}
// main method
int main(){
    int arr[10];
    for (int i=0;i<10;i++){
        scanf("%d", &arr[i]);
    }
    printf("Original Array:\n");
    for (int i=0;i<10;i++) {
        printf("%d ", arr[i]);
    }
    printf("\n\n");
    addTwenty(arr, 10);
    printf("Updated Array:\n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}