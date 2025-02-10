// WAP to reverse a string and check whether it is palindrome or not
#include<stdio.h>
#include<string.h>
// main method
int main(){
    char str[50];
    printf("Enter the value of string\n");
    gets(str);
    puts(strrev(str));
    return 0;
}