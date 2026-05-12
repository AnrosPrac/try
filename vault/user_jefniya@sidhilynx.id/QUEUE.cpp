#include <iostream>
using namespace std;

class queue {
    int data;
    queue* next,*front,*rear;
public:
    queue() {
        next = front = rear = 0;
    }
    void insert(int x) {
        queue* temp ;
        temp -> data = x;
        
        if(rear == nullptr) {
            front = rear = temp;
            return ;
        }
        rear -> next = temp;
        rear = temp;
    }
    void pop() {
        queue* temp = new queue( );
        temp = front;
        cout << front -> data << " is removed!!" << endl;
        front = front -> next;
        delete temp;
    }
    void show() {
        queue* temp = front;
        
        while(temp != nullptr) {
            cout << temp -> data << " " << endl;
            temp = temp -> next;
        }
        cout << endl;
    }
};

int main() {
    queue q;
    q.insert(10);
    q.insert(20);
    q.insert(30);
    q.insert(40);
    q.pop();
    q.show();
}