#include <stdio.h>
// function
int count_char(char *line, char ch){
    int count = 0;
    while (*line != '\0'){
        if(*line == ch){
            count++;
        }
        line++;
    }
    return count;
}
// main method
int main(){
    char line[100];
    char ch;
    printf("Enter a line of text: \n");
    fgets(line, sizeof(line), stdin);
    printf("Enter character to count occurrences of: ");
    scanf("%c", &ch);
    int occurrences;
    occurrences = count_char(line, ch);
    printf("Number of occurrences of '%c' in the line: %d\n", ch, occurrences);
    return 0;
}