#include <iostream>
using namespace std;

class Solution {
public:
    void echoInteger(int num) {
        cout << num << endl;
    }
};

int main() {
    Solution sol;
    int number;
    cin >> number;
    sol.echoInteger(number);
    return 0;
}