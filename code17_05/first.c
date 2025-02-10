// WAP to print the details of cricket players using structure.
#include<stdio.h>
// struture definition
struct player{
    char name[50];
    float avg_score;
    int age;
    // int matches_palyed;
    // int highest_score;
};
// main method
int main(){
    struct player players[11];
    printf("enetr teh players details upto 11\n");
    for(int i=0; i<11 ;i++){
        scanf("%s %f %d", players[i].name, &players[i].avg_score, &players[i].age);
    }
    for(int i=0;i<11;i++){
        printf("%s %f %d", players[i].name, players[i].avg_score, players[i].age);
    }
    return 0;
}