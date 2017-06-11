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

ListNode* reverseList(ListNode* head) {
    ListNode* newHead = new ListNode(0);
    newHead->next = head;
    ListNode* trail = NULL;
    ListNode* middle = NULL; 
    while (head) {
        trail = middle;
        middle = head;
        head = head->next;
        middle->next = trail;
    }
    return newHead->next;
}

int main() {
    return 0;
}
