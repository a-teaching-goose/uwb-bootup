#include "TreeNode.h"
#include "stdio.h"

ListNode *create_list();

void delete_tree(ListNode *pNode);

int main(int argc, char **argv) {
    ListNode *root = create_list();

    delete_tree(root);
}

void delete_tree(ListNode *root) {
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
ListNode *create_list() {
    auto *root = new ListNode(6);
    root->left = new ListNode(3);
    root->right = new ListNode(5);
    root->left->left = new ListNode(1);
    root->left->right = new ListNode(2);
    root->right->right = new ListNode(4);
    return root;
}
