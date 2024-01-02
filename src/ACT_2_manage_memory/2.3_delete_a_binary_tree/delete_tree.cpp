#include "TreeNode.h"
#include "stdio.h"

TreeNode *create_tree();

void delete_tree(TreeNode *pNode);

int main(int argc, char **argv) {
    TreeNode *root = create_tree();

    delete_tree(root);
}

void delete_tree(TreeNode *root) {
    if (root == nullptr) {
        return;
    }

    if (root->left != nullptr) {
        if (root->left->left != nullptr || root->left->right != nullptr) {
            delete_tree(root->left);
        } else {
            printf("node %d deleted\n", root->left->value);
            delete root->left;
        }
    }
    if (root->right != nullptr) {
        if (root->right->left != nullptr || root->right->right != nullptr) {
            delete_tree(root->right);
        } else {
            printf("node %d deleted\n", root->right->value);
            delete root->right;
        }
    }
    printf("node %d deleted\n", root->value);
    delete root;
}

/*
 * create a binary tree
        6
       / \
      3   5
     / \   \
    1   2   4
 */
TreeNode *create_tree() {
    auto *root = new TreeNode(6);
    root->left = new TreeNode(3);
    root->right = new TreeNode(5);
    root->left->left = new TreeNode(1);
    root->left->right = new TreeNode(2);
    root->right->right = new TreeNode(4);
    return root;
}
