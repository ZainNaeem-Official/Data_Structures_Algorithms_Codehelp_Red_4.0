#include <iostream>
using namespace std;

class Solution {
public:
    int areaOfRectangle(int length, int breadth) {
        return length * breadth;
    }
};

int main() {
    Solution sol;
    int length, breadth;
    cin >> length >> breadth;
    int result = sol.areaOfRectangle(length, breadth);
    cout << result << endl;
    return 0;
}