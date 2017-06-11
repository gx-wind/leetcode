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

ListNode* rotateRight(ListNode* head, int k) {
    if (!head) {
        return head;
    }
    ListNode* newH = head, *tail = head;
    int n = 1;
    while (tail->next) {
        ++n;
        tail = tail->next;
    }
    head = tail->next;
    if (k %= n) {
        for (int i = 0; i < n-k; i++)
            tail = tail->next;
    }
    newH = tail->next;
    tail->next =NULL;
    return newH;
}

int main() {
    ListNode* head = new ListNode(1);
    rotateRight(head, 1);
    return 0;
}
