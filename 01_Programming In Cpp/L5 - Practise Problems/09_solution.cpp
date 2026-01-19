#include <iostream>
using namespace std;

class Solution {
public:
    string checkSign(int num) {
        if (num > 0) {
            return "Positive";
        } else if (num < 0) {
            return "Negative";
        } else {
            return "Zero";
        }
    }
};

int main() {
    Solution sol;
    int num;
    cin >> num;
    string result = sol.checkSign(num);
    cout << result << endl;
    return 0;
}