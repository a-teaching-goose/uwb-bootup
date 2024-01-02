#include "ListNode.h"
#include "stdio.h"

ListNode *create_list();

void print_single_linked_list(ListNode *head);

void delete_single_linked_list(ListNode *pNode);

int main(int argc, char **argv) {
    ListNode *head = create_list();

    print_single_linked_list(head);
    delete_single_linked_list(head);
}

void print_single_linked_list(ListNode *head) {
    ListNode *ptr = head;
    while (ptr != nullptr) {
        printf("node %d\n", ptr->value);
        ptr = ptr->next;
    }
}

void delete_single_linked_list(ListNode *node) {
    if (node == nullptr) {
        return;
    }

    if (node->next == nullptr) {
        printf("node %d deleted\n", node->value);
        delete node;
        return;
    }

    delete_single_linked_list(node->next);
    printf("node %d deleted\n", node->value);
    delete node;
}

/*
 * create a single linked list
 * head -> 1 -> 2 -> 3 -> 4 -> null
 */
ListNode *create_list() {
    auto *head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);
    return head;
}
