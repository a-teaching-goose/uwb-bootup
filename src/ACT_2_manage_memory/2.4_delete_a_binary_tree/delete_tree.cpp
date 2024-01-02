#include "TreeNode.h"
#include "stdio.h"

ListNode *create_list();

void delete_tree(ListNode *pNode);

int main(int argc, char **argv) {
    ListNode *root = create_list();

    delete_tree(root);
}

void delete_tree(ListNode *root) {
    // TODO
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
