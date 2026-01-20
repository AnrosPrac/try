#include <stdio.h>
#include <stdlib.h>
struct book{
char title[30];
char author[30];
};
int main(){
struct book *b=malloc(sizeof(struct book));
if(b==NULL){
printf("Memory allocation failed\n");
return 1;
}
printf("Enter the title of the book:");
fgets(b->title,30,stdin);
b->title[strcspn(b->title,"\n")]=0;
printf("Enter the author of the book:");
fgets(b->author,30,stdin);
b->author[strcspn(b->author,"\n")]=0;
printf("\nBook Details:\n");
printf("Title:%s\n",b->title);
printf("Author:%s\n",b->author);
free(b);
return 0;
}

