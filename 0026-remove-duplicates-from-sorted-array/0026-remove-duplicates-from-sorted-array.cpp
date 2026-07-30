class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int cnt = 0;
        for (int z : nums) {
            if (cnt == 0 || z != nums[cnt - 1]) {
                nums[cnt] = z;
                cnt++;
            }
        }
        
        return cnt;
    }
};