#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
};

Node* createNode(int data) {
    Node* newNode = new Node();
    if (!newNode) {
        cout << "Memory error\n";
        return NULL;
    }
    newNode->data = data;
    newNode->left = newNode->right = NULL;
    return newNode;
}

void inorderTraversal(Node* root) {
    if (root) {
        inorderTraversal(root->left);
        cout << root->data << " ";
        inorderTraversal(root->right);
    }
}

void preorderTraversal(Node* root) {
    if (root) {
        cout << root->data << " ";
        preorderTraversal(root->left);
        preorderTraversal(root->right);
    }
}

void postorderTraversal(Node* root) {
    if (root) {
        postorderTraversal(root->left);
        postorderTraversal(root->right);
        cout << root->data << " ";
    }
}

void binaryTreeTraversal() {
    Node* root = createNode(1);
    root->left = createNode(2);
    root->right = createNode(3);
    root->left->left = createNode(4);
    root->left->right = createNode(5);
    cout << "Inorder Traversal: ";
    inorderTraversal(root);
    cout << "\nPreorder Traversal: ";
    preorderTraversal(root);
    cout << "\nPostorder Traversal: ";
    postorderTraversal(root);
}

struct Graph {
    int V;
    int** adjMatrix;
};

Graph* createGraph(int vertices) {
    Graph* graph = new Graph();
    graph->V = vertices;
    graph->adjMatrix = new int*[vertices];
    for (int i = 0; i < vertices; i++) {
        graph->adjMatrix[i] = new int[vertices];
        for (int j = 0; j < vertices; j++)
            graph->adjMatrix[i][j] = 0;
    }
    return graph;
}

void addEdge(Graph* graph, int src, int dest) {
    graph->adjMatrix[src][dest] = 1;
    graph->adjMatrix[dest][src] = 1;
}

void printGraph(Graph* graph) {
    for (int i = 0; i < graph->V; i++) {
        for (int j = 0; j < graph->V; j++)
            cout << graph->adjMatrix[i][j] << " ";
        cout << endl;
    }
}

void DFS(Graph* graph, int vertex, bool* visited) {
    visited[vertex] = true;
    cout << vertex << " ";
    for (int i = 0; i < graph->V; i++)
        if (graph->adjMatrix[vertex][i] && !visited[i])
            DFS(graph, i, visited);
}

void graphTraversal() {
    Graph* graph = createGraph(5);
    addEdge(graph, 0, 1);
    addEdge(graph, 0, 2);
    addEdge(graph, 1, 3);
    addEdge(graph, 2, 4);
    cout << "Graph representation: \n";
    printGraph(graph);
    bool* visited = new bool[5];
    for (int i = 0; i < 5; i++)
        visited[i] = false;
    cout << "\nDFS Traversal: ";
    DFS(graph, 0, visited);
}

int main() {
    binaryTreeTraversal();
    cout << endl;
    graphTraversal();
    return 0;
}