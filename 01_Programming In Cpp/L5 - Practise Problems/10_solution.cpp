#include <iostream>
using namespace std;

class Solution {
public:
    string determineDayType(int day) {
        if (day >= 1 && day <= 5) {
            return "Weekday";
        } else if (day == 6 || day == 7) {
            return "Weekend";
        }
        return "";
    }
};

int main() {
    Solution sol;
    int day;
    cin >> day;
    string result = sol.determineDayType(day);
    cout << result << endl;
    return 0;
}