#include <iostream>
#include <vector>

using namespace std;


// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

ListNode* deleteDuplicates(ListNode* head) {
    if (!head) {
        return head;
    }
    ListNode *n = new ListNode(0);
    ListNode *p = n;
    int pre = head->val;
    p->next = head;
    p = p->next;
    head =head->next;
    while (head) {
        if (head->val != pre) {
            pre = head->val;
            p->next = head;
            p = p->next;
        }
        head = head->next;
    }
    p->next =NULL;
    return n->next;
}


int main() {
    return 0;
}
