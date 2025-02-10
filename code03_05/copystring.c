// WAP to copy a string from one array to another 
#include<stdio.h>
#include<string.h>
// main method
int main(){
    char src[50], dst[50];
    int i=0;
    printf("Enter the value of string\n");
    gets(src);
    for(i=0;src[i]!='\0';i++){
        dst[i]= src[i];
    }
    printf("The copied string is below\n");
    dst[i]='\0';
    printf("%s\n",dst);
    return 0;
}