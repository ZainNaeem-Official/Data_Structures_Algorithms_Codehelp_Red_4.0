#include <iostream>
#include <iomanip>
using namespace std;

class Solution {
public:
    double calculatePercentage(int totalMarks, int obtainedMarks) {
        return (obtainedMarks * 100.0) / totalMarks;
    }
};

int main() {
    Solution sol;
    int totalMarks, obtainedMarks;
    cin >> totalMarks >> obtainedMarks;
    double result = sol.calculatePercentage(totalMarks, obtainedMarks);
    cout << fixed << setprecision(2) << result << endl;
    return 0;
}