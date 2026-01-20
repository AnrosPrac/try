#include<stdio.h>
struct Node{
int data;
struct Node *next;
};
int main(){
struct Node n1,n2,n3;
n1.data=10;
n2.data=20;
n3.data=30;
n1.next=&n2;
n2.next=&n3;
n3.next=NULL;
printf("%d->",n1.data);
printf("%d->",n1.next->data);
printf("%d->NULL",n2.next->data);
return 0;
}