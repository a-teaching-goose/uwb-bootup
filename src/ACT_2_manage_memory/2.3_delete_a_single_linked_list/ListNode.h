#include "stdio.h"

class ListNode {
public:
    int value;
    ListNode *next;

    explicit ListNode(int value) : value(value), next(nullptr) {
    }
};