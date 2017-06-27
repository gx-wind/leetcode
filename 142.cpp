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

bool hasCircle(ListNode *head) {
    if (!head) {
        return false;
    }
    ListNode *one = head;
    ListNode *two = head;
    do{
        if (!one || !two) {
            return false;
        }
        one = one->next;
        if (!two->next) {
            return false;
        }
        two = two->next->next;
    } while(one != two);
    return true;
}

ListNode *detectCycle(ListNode *head) {
    ListNode *one = head, *two = head;
    while (one != NULL && two != NULL) {
        one = one->next;
        if (two->next == NULL) {
            return NULL;
        }
        two = two->next->next;
        if (one == two) {
            break;
        }
    }
    if (two == NULL) {
        return NULL;
    }
    while (head != one) {
        head = head->next;
        one = one->next;
    }
    return head;
}


int main() {
    return 0;
}
