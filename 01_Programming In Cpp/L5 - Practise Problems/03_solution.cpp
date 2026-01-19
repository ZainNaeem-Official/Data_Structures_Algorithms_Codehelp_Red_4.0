#include <iostream>
using namespace std;

class Solution {
public:
    double halfOfInteger(int num) {
        return num / 2.0;
    }
};

int main() {
    Solution sol;
    int number;
    cin >> number;
    double result = sol.halfOfInteger(number);
    cout << result << endl;
    return 0;
}