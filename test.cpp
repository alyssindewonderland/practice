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
            int unit = 0;
            int res1 = l1;
            int res2 = l2;
            while (l1 != nullptr || l2 != nullptr) {
                ListNode l1 = l1->next;
                int temp = l1 * 10**unit;
            }
        }
};
