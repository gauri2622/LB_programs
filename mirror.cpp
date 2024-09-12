#include <iostream>

struct TreeNode {
    int data;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int value) : data(value), left(nullptr), right(nullptr) {}
};

void inorderTraversal(TreeNode* root) {
    if (root) {
        inorderTraversal(root->left);
        std::cout << root->data << " ";
        inorderTraversal(root->right);
    }
}
void convertToMirror(TreeNode* root) {
    if (root) {
        TreeNode* temp = root->left;
        root->left = root->right;
        root->right = temp;

        convertToMirror(root->left);
        convertToMirror(root->right);
    }
}

int main() {
  
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);

    std::cout << "Original Tree (Inorder Traversal): ";
    inorderTraversal(root);
    std::cout << std::endl;

    convertToMirror(root);

    std::cout << "Mirror Tree (Inorder Traversal): ";
    inorderTraversal(root);
    std::cout << std::endl;

    delete root->left->left;
    delete root->left->right;
    delete root->left;
    delete root->right;
    delete root;

    return 0;
}