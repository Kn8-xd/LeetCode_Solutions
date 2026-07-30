#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int l = 0, len = 0;
        int zcnt = 0;
        for (int r = 0; r < nums.size(); r++) {
            if (nums[r] == 0) {
                zcnt++;
            }
            while (zcnt > k) {
                if (nums[l] == 0) {
                    zcnt--;
                }
                l++;
            }
            len = max(len, r - l + 1);
        }
        return len;
    }
};