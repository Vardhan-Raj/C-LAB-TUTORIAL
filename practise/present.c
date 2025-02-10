// WAP to search whether an item is present in the array or not. If present display the position, return -1 if not found
#include<stdio.h>
int main(){
    int i,arr[10],item,position=-1;
    printf("Enter an item : \n");
    scanf("%d",&item);
    for(i=0;i<10;i++){
        printf("\nEnter the %d item  ",i);
        scanf("%d",&arr[i]);
    }
    for(i=0;i<10;i++){
        if(item==arr[i]){
            position=i;
            printf("\nItem is on %d positon\n",position);
        }
        
    }
    return 0;
}