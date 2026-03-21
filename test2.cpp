#include <iostream>
using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        for (char x : s) {
            cout << "DEBUG: " << x << endl;
        }

        return 0;
    }
};

int main() {
    Solution sol;
    sol.lengthOfLongestSubstring("hello");

    return 0;
}

