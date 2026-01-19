#include <iostream>
using namespace std;

class Solution {
public:
    int perimeterOfTriangle(int a, int b, int c) {
        return a + b + c;
    }
};

int main() {
    Solution sol;
    int a, b, c;
    cin >> a >> b >> c;
    int result = sol.perimeterOfTriangle(a, b, c);
    cout << result << endl;
    return 0;
}