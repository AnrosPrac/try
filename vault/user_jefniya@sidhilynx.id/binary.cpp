#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int value) {
        data = value;
        left = NULL;
        right = NULL;
    }
};

class BinaryTree {
public:
    Node* root;

    BinaryTree() {
        root = NULL;
    }

    void insert(int value) {
        if(root == NULL) {
            root = new Node(value);
        } else {
            insertRecursive(root, value);
        }
    }

    void insertRecursive(Node* current, int value) {
        if(value < current->data) {
            if(current->left == NULL) {
                current->left = new Node(value);
            } else {
                insertRecursive(current->left, value);
            }
        } else if(value > current->data) {
            if(current->right == NULL) {
                current->right = new Node(value);
            } else {
                insertRecursive(current->right, value);
            }
        }
    }

    void printInorder() {
        printInorderRecursive(root);
    }

    void printInorderRecursive(Node* current) {
        if(current != NULL) {
            printInorderRecursive(current->left);
            cout << current->data << " ";
            printInorderRecursive(current->right);
        }
    }

    void printPreorder() {
        printPreorderRecursive(root);
    }

    void printPreorderRecursive(Node* current) {
        if(current != NULL) {
            cout << current->data << " ";
            printPreorderRecursive(current->left);
            printPreorderRecursive(current->right);
        }
    }

    void printPostorder() {
        printPostorderRecursive(root);
    }

    void printPostorderRecursive(Node* current) {
        if(current != NULL) {
            printPostorderRecursive(current->left);
            printPostorderRecursive(current->right);
            cout << current->data << " ";
        }
    }
};

int main() {
    BinaryTree bt;
    bt.insert(8);
    bt.insert(3);
    bt.insert(10);
    bt.insert(1);
    bt.insert(6);
    bt.insert(14);
    bt.insert(4);
    bt.insert(7);
    bt.insert(13);

    cout << "Inorder traversal: ";
    bt.printInorder();
    cout << endl;

    cout << "Preorder traversal: ";
    bt.printPreorder();
    cout << endl;

    cout << "Postorder traversal: ";
    bt.printPostorder();
    cout << endl;

    return 0;
}