#include <stdio.h>
#include<stdlib.h>

struct Book
{
    char title[50];
    float price;
    int pages;
};
int main()
{
    struct Book *b;
    b=(struct Book*) malloc(sizeof(struct Book));
    if(b==NULL)
    {
        printf("Memory allocation failed!\n");
        return 1;
    }
    printf("Enter Book Title : ");
    scanf("%s",b->title);
    
    printf("Enter Book Price : ");
    scanf("%f",&b->price);
    
    printf("Enter Number of Pages : ");
    scanf("%d",&b->pages);
        
    printf("\n*****Book Details*****\n");
    printf("Title : %s\n",b->title);
    printf("Price : %2f\n",b->price);
    printf("Pages : %d\n",b->pages);
    
    free(b);
    return 0;
}