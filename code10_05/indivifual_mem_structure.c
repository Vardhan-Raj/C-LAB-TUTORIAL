// // WAP to pass individual member of structure variable to a function
// #include<stdio.h>
// void displayIndividual(struct book * , struct book * , struct book * , struct book * );
// struct book{
//     char author[25];
//     char name[20];
//     float price;
//     int pages;
// };
// void displayIndividual(struct book * s, struct book * t, struct book * u, struct book * v){
//     printf("%s %s %f %d", s, t, u, v);
// }
// // main method
// int main(){
//     struct book b1;
//     scanf("%s %s %f %d",b1.author, b1.name, &b1.price, &b1.pages);
//     displayIndividual(b1.author, b1.name, &b1.price, &b1.pages);
//     return 0;
// }

// #include<stdio.h>
// struct book{
//     char name[20];
//     char game[20];
//     int cost;
// };
// void display(struct book *ptr){
//     printf("%s %s %d\n", ptr->name, ptr->game, ptr->cost);
//     return ;
// }
// // main method
// int main(){
//     struct book b1={"Let us C", "YPK", 2000};
//     printf("First book :\n");
//     display(&b1);
//     return 0;
// }

#include <stdio.h>

int main() {
    char *ptr = "Hello";
    *ptr = 'J';
    printf("%s", ptr);
    return 0;
}
