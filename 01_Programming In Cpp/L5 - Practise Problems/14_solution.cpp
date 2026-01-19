#include <iostream>
using namespace std;

class Solution {
public:
    void printReverseCounting(int n) {
        for (int i = n; i >= 1; i--) {
            cout << i;
            if (i > 1) cout << " ";
        }
        cout << endl;
    }
};

int main() {
    Solution sol;
    int n;
    cin >> n;
    sol.printReverseCounting(n);
    return 0;
}