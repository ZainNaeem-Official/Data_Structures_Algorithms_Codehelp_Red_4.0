#include <iostream>
using namespace std;

class Solution {
public:
    void printCounting(int n) {
        for (int i = 1; i <= n; i++) {
            cout << i;
            if (i < n) cout << " ";
        }
        cout << endl;
    }
};

int main() {
    Solution sol;
    int n;
    cin >> n;
    sol.printCounting(n);
    return 0;
}