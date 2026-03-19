#include <iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode* next;

    ListNode(int x) {
        val = x;
        next = nullptr;
    }
};

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* dummy = new ListNode(0);
        ListNode* curr = dummy;
        int carry = 0;

        while (l1 || l2 || carry) {
            int val1 = l1 ? l1->val : 0;
            int val2 = l2 ? l2->val : 0;

            int sum = val1 + val2 + carry;
            carry = sum / 10;

            curr->next = new ListNode(sum % 10);
            curr = curr->next;

            if (l1) l1 = l1->next;
            if (l2) l2 = l2->next;
        }

        return dummy->next;
    }
};

int main() {
    ListNode* a = new ListNode(2);
    a->next = new ListNode(4);
    a->next->next = new ListNode(3);

    ListNode* b = new ListNode(5);
    b->next = new ListNode(6);
    b->next->next = new ListNode(4);

    Solution sol;
    ListNode* res = sol.addTwoNumbers(a, b);

    while (res) {
        cout << res->val << " ";
        res = res->next;
    }

    cout << endl;
    return 0;
}
