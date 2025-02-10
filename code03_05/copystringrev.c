// WAP to copy a string in reverse order
#include<stdio.h>
#include<string.h>

int main(){
    char src[50], dst[50];

    printf("Enter the string\n");
    gets(src);
    int i;
    for (i=0;src[i]!='\0';i++){                                        
        dst[i]=src[i];
    }
    dst[i]='\0';
    // printf("%s\n",str_dest);
    int len;
    len =strlen(dst);

    for(i=0;i<len/2;i++){
        int temp=dst[i];
        dst[i]=dst[len-1-i];
        dst[len-1-i]=temp;
    }
    // printf("%s",str_dest);
    puts (dst);
    return 0;
}