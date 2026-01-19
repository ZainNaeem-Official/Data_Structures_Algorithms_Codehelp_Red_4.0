#include <iostream>
using namespace std;

class Solution {
public:
    int simpleInterest(int P, int R, int T) {
        return (P * R * T) / 100;
    }
};

int main() {
    Solution sol;
    int P, R, T;
    cin >> P >> R >> T;
    int result = sol.simpleInterest(P, R, T);
    cout << result << endl;
    return 0;
}