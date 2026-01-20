#include<stdio.h>
#include<stdlib.h>
struct Book{
    char title[50];
    char author[50];
    float price;
};
int main(){
    struct Book *b = (struct Book*)malloc(sizeof(struct Book));
    if(b==NULL) return 1;
    printf("Enter title: ");
    scanf("%49s", b->title);
    printf("Enter author:\n ");
    scanf("%49s", b->author);
    printf("Enter price:\n ");
    scanf("%f", &b->price);
    printf("Title: %s\nAuthor: %s\nPrice: %.2f\n", b->title, b->author, b->price);
    free(b);
    return 0;
}
