#include <iostream>
using namespace std;

class Solution {
public:
    string isValidTriangle(int a, int b, int c) {
        if (a + b > c && b + c > a && a + c > b) {
            return "Yes";
        } else {
            return "No";
        }
    }
};

int main() {
    Solution sol;
    int a, b, c;
    cin >> a >> b >> c;
    string result = sol.isValidTriangle(a, b, c);
    cout << result << endl;
    return 0;
}