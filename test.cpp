#include <iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(nullptr) {}
};

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* dummy = new ListNode(0);
        ListNode* current = dummy;
        int carry = 0;

        while (l1 != nullptr || l2 != nullptr || carry != 0) {
            int x = (l1 ? l1->val : 0), y = (l2 ? l2->val : 0);
            int num = x + y + carry;
            int remain = num % 10;
            
            carry = num / 10;
            
            current->next = new ListNode(remain);
            current = current->next;

            if (l1 != nullptr) l1 = l1->next;
            if (l2 != nullptr) l2 = l2->next;
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

    Solution s;
    ListNode* result = s.addTwoNumbers(a, b);

    while (result != nullptr) {
        cout << result->val << " ";
        result = result->next;
    }
    cout << "\n";

    return 0;
}
