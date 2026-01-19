#include <iostream>
using namespace std;

class Solution {
public:
    int sumOfN(int n, int arr[]) {
        int sum = 0;
        for (int i = 0; i < n; i++) {
            sum += arr[i];
        }
        return sum;
    }
};

int main() {
    Solution sol;
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int result = sol.sumOfN(n, arr);
    cout << result << endl;
    return 0;
}