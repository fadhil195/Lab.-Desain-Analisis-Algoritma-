#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
};

Node* createNode(int data) {
    Node* newNode = new Node();
    newNode->data = data;
    newNode->left = newNode->right = NULL;
    return newNode;
}

Node* insert(Node* root, int data) {
    if (root == NULL) {
        root = createNode(data);
    } else if (data < root->data) {
        root->left = insert(root->left, data);
    } else {
        root->right = insert(root->right, data);
    }
    return root;
}

void preOrder(Node* root) {
    if (root != NULL) {
        cout << root->data << " ";
        preOrder(root->left);
        preOrder(root->right);
    }
}

void inOrder(Node* root) {
    if (root != NULL) {
        inOrder(root->left);
        cout << root->data << " ";
        inOrder(root->right);
    }
}

void postOrder(Node* root) {
    if (root != NULL) {
        postOrder(root->left);
        postOrder(root->right);
        cout << root->data << " ";
    }
}

int main() {
    int n, data;
    Node* root = NULL;
    cout << "Masukkan jumlah bilangan: ";
    cin >> n;
    cout << "Masukkan bilangan-bilangan tersebut:\n";
    for (int i = 0; i < n; i++) {
        cin >> data;
        root = insert(root, data);
    }
    cout << "Pre-order: ";
    preOrder(root);
    cout << "\n";
    cout << "In-order: ";
    inOrder(root);
    cout << "\n";
    cout << "Post-order: ";
    postOrder(root);
    cout << "\n";
    return 0;
}
