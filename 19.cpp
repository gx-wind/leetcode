#include <iostream>

using namespace std;

struct ListNode{
    int val;
    ListNode *next;
    ListNode(int x):val(x), next(NULL) {}
};

ListNode *removeNthFromEnd(ListNode *head, int n) {
    // write your code here
    ListNode *newHead = new ListNode(0);
    newHead->next = head;
    ListNode *slow = newHead, *fast = newHead;
    for(int i = 1; i <= n+1; i++) {
        fast = fast->next;
    }
    while (fast) {
        fast = fast->next;
        slow = slow->next;
    }
    slow->next = slow->next->next;
    return newHead->next;
}

int main() {
    return 0;
}
