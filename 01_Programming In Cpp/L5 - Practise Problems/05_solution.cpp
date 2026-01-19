#include <iostream>
using namespace std;

class Solution {
public:
    int averageOfThree(int a, int b, int c) {
        return (a + b + c) / 3;
    }
};

int main() {
    Solution sol;
    int a, b, c;
    cin >> a >> b >> c;
    int result = sol.averageOfThree(a, b, c);
    cout << result << endl;
    return 0;
}