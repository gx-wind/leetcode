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

bool hasCycle(ListNode *head) {
    ListNode *p = head;
    while (head) {
        head = head->next;
        if (p != NULL && p->next != NULL) {
            p = p->next->next;
        } else {
            return false;
        }
        if (head == p) {
            return true;
        }
    }
    return false;
}

int main() {
    return 0;
}
