#include <iostream>
using namespace std;

class Solution {
public:
    void printEvenNumbers(int n) {
        bool first = true;
        for (int i = 2; i <= n; i += 2) {
            if (!first) cout << " ";
            cout << i;
            first = false;
        }
        if (!first) cout << endl;
    }
};

int main() {
    Solution sol;
    int n;
    cin >> n;
    sol.printEvenNumbers(n);
    return 0;
}