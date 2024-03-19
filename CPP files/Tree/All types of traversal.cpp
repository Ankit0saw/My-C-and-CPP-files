// in this code, user needs to input how many nodes he wants to insert
// after that he'll insert the elements at those nodes
// and the output will display the elements in inorder,preorder and postorder traversal forms


#include <iostream>
using namespace std;

// Define the structure for a tree node
struct TreeNode {
    TreeNode* left;
    TreeNode* right;
    int data;
};

// Function to create a new node
TreeNode* createNode(int value) {
    TreeNode* newNode = new TreeNode;
    newNode->data = value;
    newNode->left = nullptr;
    newNode->right = nullptr;
    return newNode;
}

// Function to insert a value into the BST
TreeNode* insert(TreeNode* root, int value) {
    if (root == nullptr) {
        return createNode(value);
    } else {
        if (value < root->data) {
            root->left = insert(root->left, value);
        } else {
            root->right = insert(root->right, value);
        }
        return root;
    }
}

// Inorder traversal
void inorderTraversal(TreeNode* root) {
    if (root != nullptr) {
        inorderTraversal(root->left);
        cout << root->data << " ";
        inorderTraversal(root->right);
    }
}

// Preorder traversal
void preorderTraversal(TreeNode* root) {
    if (root != nullptr) {
        cout << root->data << " ";
        preorderTraversal(root->left);
        preorderTraversal(root->right);
    }
}

// Postorder traversal
void postorderTraversal(TreeNode* root) {
    if (root != nullptr) {
        postorderTraversal(root->left);
        postorderTraversal(root->right);
        cout << root->data << " ";
    }
}

int main() {
    TreeNode* root = nullptr;
    int numNodes, value;
    cout << "Enter the number of nodes in the BST: ";
    cin >> numNodes;
    cout << "Enter the values of the nodes (all distinct):\n";
    for (int i = 0; i < numNodes; ++i) {
        cin >> value;
        root = insert(root, value);
    }

    cout << "Inorder traversal: ";
    inorderTraversal(root);
    cout << "\nPreorder traversal: ";
    preorderTraversal(root);
    cout << "\nPostorder traversal: ";
    postorderTraversal(root);

    return 0;
}
