#include <iostream>

using namespace std;

/**
 * Definition for singly-linked list.
 */
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
    if (!headA || !headB) {
        return NULL;
    }
    ListNode *p1 = headA, *p2 = headB;
    while (p1 != p2) {
        if (p1 == NULL) {
            p1 = headB;
        } else {
            p1 = p1->next;
        }
        if (p2 == NULL) {
            p2 = headA;
        } else {
            p2 = p2->next;
        }
    }
    return p1;
}

int main() {
    return 0;
}
