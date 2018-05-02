/*
Given a 32-bit signed integer, reverse digits of an integer.

Example 1:
Input: 123
Output: 321

Example 2:
Input: -123
Output: -321

Note:
Assume we are dealing with an environment which could only store integers within the 32-bit signed integer range: [−23^1,  231^−1].
For the purpose of this problem, assume that your function returns 0 when the reversed integer overflows.
*/

class Solution {
public:
    int reverse(int x) {
        if (x > LONG_MAX or x < LONG_MIN or x == 0) return 0;
        bool isNegative = false;
        if (x < 0) isNegative = true;
        vector<int> digits;
        int new_x = 0;
        while (x > 0) {
            int last = x % 10;
            x /= 10;
            new_x = new_x * 10 + last;
        }
        return new_x;
    }
};

int stringToInteger(string input) {
    return stoi(input);
}

int main() {
    string line;
    while (getline(cin, line)) {
        int x = stringToInteger(line);
        
        int ret = Solution().reverse(x);

        string out = to_string(ret);
        cout << out << endl;
    }
    return 0;
}
