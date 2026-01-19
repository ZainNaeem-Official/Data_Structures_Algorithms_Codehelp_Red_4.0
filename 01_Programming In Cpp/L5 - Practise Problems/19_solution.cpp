#include <iostream>
using namespace std;

class Solution {
public:
    string isPrime(int n) {
        if (n <= 1) return "No";
        if (n == 2) return "Yes";
        if (n % 2 == 0) return "No";
        
        for (int i = 3; i * i <= n; i += 2) {
            if (n % i == 0) return "No";
        }
        return "Yes";
    }
};

int main() {
    Solution sol;
    int n;
    cin >> n;
    string result = sol.isPrime(n);
    cout << result << endl;
    return 0;
}