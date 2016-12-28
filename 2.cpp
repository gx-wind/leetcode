#include <iostream>
#include <algorithm>

using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
    public:
        ListNode* AddTwoNumbers(ListNode *l1, ListNode *l2) {
            ListNode *pre = new ListNode(0);
            ListNode *p = pre;
            int sum = 0;
            while (l1 || l2) {
                sum /= 10;
                if (l1) {
                    sum += l1->val;
                    l1 = l1->next;
                }
                if (l2) {
                    sum += l2->val;
                    l2 = l2->next;
                }
                p->next = new ListNode(sum%10);
                p = p->next;
            }
            if (sum/10 == 1) {
                p->next = new ListNode(1);
            }
            return pre->next;
        }
};

int main() {
}
