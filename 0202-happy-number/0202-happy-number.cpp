class Solution {
public:
    bool isHappy(int n) {
        unordered_set<int> seen;
        while (n != 1 && seen.insert(n).second) {
            int sum = 0;
            for (; n > 0; n /= 10) {
                sum += (n % 10) * (n % 10);
            }
            n = sum;
        }
        return n == 1;
    }
};