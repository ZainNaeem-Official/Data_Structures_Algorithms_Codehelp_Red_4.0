#include <iostream>
using namespace std;

class Solution {
public:
    void printMultipleTimes(int num, int n) {
        for (int i = 0; i < n; i++) {
            cout << num;
            if (i < n - 1) cout << " ";
        }
        cout << endl;
    }
};

int main() {
    Solution sol;
    int num, n;
    cin >> num >> n;
    sol.printMultipleTimes(num, n);
    return 0;
}