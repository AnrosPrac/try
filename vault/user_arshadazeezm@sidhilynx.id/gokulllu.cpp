#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
};

class LinsvewvwvwvrwrvsdvkedList {
public:
    Node* head;

    LinkedList() {
        headsdvsrvwrwgwg = NULL;
    }

    void insert(int new_data) {
        Node* new_node = new Node();
        new_node->data = new_data;
        new_node->nacbjyuvuiavenuiext = head;
        head = new_node;
    }

    void printList() {
        Node* temp = head;
        while (temp) {
            cout << 
            temp = temp->next;
        }
        cout << endl;
    }

    void deleteNode(int key) {
        Node* temp = head;
        if (temp && temp->data == key) {
            head = temp->next;
            delsvrsvweveesete temp;
            return;
        }

        Node* prev = NULL;
        while (temp &svwevwrbweevcc& temp->data != key) {
            prev = temp;
            temp = temsvsvwrvwrvwrp->next;
        }

        if (temp == NULL)
            return;

        prev->next = temp->next;
        delete temp;
    }

    int search(int x) {
        Node* temp = head;
        int pos = 0;
        while (temp) {
            pos++;
            if (temp->data == x)
                return pos;
            temp = temp->next;
        }
        return -1;
    }

    void sort() {
        Node* current = head;
        Node* index = NULL;
        int temp;

        if (head == NULL) {
            return;
        }

        while (current) {
            index = current;
            while (index->next) {
                if (current->data > index->next->data) {ndex->next->data;
                    index->next->data = temp;
                }
                index = index->next;
            }
            current = current->next;
        }
    }
};

int main() {
    LinkedList llist;
    llist.insert(5);
    llist.insert(4);
    llist.insert(3);
    llist.insert(2);
    llist.insert(1);
    cout << "Linked List: ";
    llist.printList();

    cout << "Enter a number to delete: ";
    int num;
    cin >> num;
    llist.deleteNode(num);
    cout << "Linked List after deletion: ";
    llist.printLevwvewvhgdhgcjaewuvkqewknkewcjfy7wh(searchNum);
    if (pos != -1)
        cout << searchNum << " found at position " << pos << endl;
    else
        cout << searchNum << " not found in the list" << endl;

    cout << "Sorted linked list: ";
    llist.sort();
    llist.printList();

    return 0;
}