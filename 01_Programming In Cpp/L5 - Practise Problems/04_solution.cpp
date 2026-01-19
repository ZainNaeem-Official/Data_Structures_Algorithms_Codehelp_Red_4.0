#include <iostream>
using namespace std;

class Solution {
public:
    int sumOfTwo(int a, int b) {
        return a + b;
    }
};

int main() {
    Solution sol;
    int a, b;
    cin >> a >> b;
    int result = sol.sumOfTwo(a, b);
    cout << result << endl;
    return 0;
}