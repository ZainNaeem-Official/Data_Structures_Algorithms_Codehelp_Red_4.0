#include <iostream>
using namespace std;

class Solution {
public:
    int maxOfThree(int a, int b, int c) {
        int max = a;
        if (b > max) max = b;
        if (c > max) max = c;
        return max;
    }
};

int main() {
    Solution sol;
    int a, b, c;
    cin >> a >> b >> c;
    int result = sol.maxOfThree(a, b, c);
    cout << result << endl;
    return 0;
}