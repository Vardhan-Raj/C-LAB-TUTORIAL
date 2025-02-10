// WAP which find number of 'a' present in all names using array of pointer variable, also for vowels
#include<stdio.h>
// main method
int main(){
    char *p[5];
    char a[]="Yudhisthir";
    char b[]="Bhim";
    char c[]="Arjun";
    char d[]="Nakul";
    char e[]="Sahadev";
    p[0]=a;
    p[1]=b;
    p[2]=c;
    p[3]=d;
    p[4]=e;
    int j;
    char ch;
    int vowels=0, aa=0;
    for(int i=0;i<5;i++){
        j=0;
        while(p[i][j]!='\0'){
            ch=p[i][j++];
            if(ch=='a')
                aa++;
            if(ch=='a'|| ch=='e'|| ch=='i'|| ch=='o'|| ch=='u')
                vowels++;
            
        }
    }
    printf("Number of a is %d and vowels is %d\n",aa,vowels);
    
    return 0;
}