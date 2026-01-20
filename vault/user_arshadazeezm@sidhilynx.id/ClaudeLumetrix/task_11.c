#include <stdio.h>

struct Node {
    int data;
    struct Node *next;
};

int main() {
    struct Node newNode;
    newNode.data = 10;
    newNode.next = NULL;

    printf("Data: %d\n", newNode.data);
    printf("Next pointer: %p\n", (void *)newNode.next);

    struct Node anotherNode;
    anotherNode.data = 20;
    newNode.next = &anotherNode;
    anotherNode.next = NULL;

    printf("Data of next node: %d\n", newNode.next->data);

    return 0;
}