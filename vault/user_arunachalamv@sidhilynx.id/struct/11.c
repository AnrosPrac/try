#include <stdio.h>
struct node{
int data;
struct node* next;
};
int main(){
struct node n1,n2,n3;
n1.data=12;
n2.data=124;
n3.data=24;
n1.next=&n2;
n2.next=&n3;
n3.next=NULL;
struct node* ptr=&n1;
while(ptr!=NULL){
printf("%d",ptr->data);
if(ptr->next!=NULL)
printf("->");
ptr=ptr->next;
}
printf("->NULL\n");
return 0;
}
