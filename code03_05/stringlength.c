// WAP to find length of a string
#include<stdio.h>
#include<string.h>
// function decleration
int length(char *str){
    int i=-1;
    while(str[++i]);
    return i;
}
// main method
int main(){
    char string[50];
    printf("Enter the value of string\n");
    gets(string);
    printf("%d",length(string));
    return 0;
}