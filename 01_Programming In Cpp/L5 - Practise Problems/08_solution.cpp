#include <iostream>
using namespace std;

class Solution {
public:
    string checkVotingEligibility(int age) {
        if (age >= 18) {
            return "Eligible to vote";
        } else {
            return "Not eligible to vote";
        }
    }
};

int main() {
    Solution sol;
    int age;
    cin >> age;
    string result = sol.checkVotingEligibility(age);
    cout << result << endl;
    return 0;
}