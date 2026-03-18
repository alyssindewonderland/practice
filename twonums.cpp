#include <iostream>
using namespace std;

int main() {
    int a = 5;
    cout << a << endl;

    int b = 10;
    long long big = 1e12;
    double x = 3.14;
    char c = 'a';
    string s = "hello";
    bool ok = true;

    if (a > 5) {
        cout << "big" << endl;
    } else {
        cout << "small" << endl;
    }

    for (int i = 0; i < 5; i++) {
        cout << i << endl;
    }

    vector<int> nums = {1, 2, 3};

    for (int x : nums) {
        cout << x << endl;
    }

    vector<int> v = {1, 2, 3};

    v.push_back(4);
    v.pop_back();
    v.size();
    v[0];

    for (int i = 0; i < v.size(); i++) {}

    for (int x : v) {}

    unordered_map<int, int> mp;

    mp[5] = 10;
    cout << mp[5] << endl;

    if (mp.count(5)) {}

    for (auto p : mp) {
        cout << p.first << " " << p.second << endl;
    }
    return 0;
}
