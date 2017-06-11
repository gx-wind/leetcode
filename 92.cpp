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

ListNode* reverseBetween(ListNode* head, int m, int n) {
    ListNode* h = head;
    ListNode* newHead = new ListNode(0);
    newHead->next = head;
    n -= m;
    ListNode *pre = newHead;
    while(--m) {
        pre = pre->next;
    }
    ListNode *start = pre->next; 
    while(n--) {
        ListNode *p = start->next;
        start->next = p->next;
        p->next = start;
        pre->next = p;

    }
    return newHead->next;
}

int main() {
    return 0;
}
