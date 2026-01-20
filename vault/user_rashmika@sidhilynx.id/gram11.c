#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

int main() {
    struct Node *head = malloc(sizeof(struct Node));
    struct Node *second = malloc(sizeof(struct Node));

    head->data = 10;
    head->next = second;

    second->data = 20;
    second->next = NULL;

    for (struct Node *temp = head; temp != NULL; temp = temp->next)
        printf("%d -> ", temp->data);
    printf("NULL\n");

    free(head);
    free(second);
    return 0;
}