class Solution {
public:
    int singleNumber(vector<int>& nums) {
        map<int,int> ash;
        for(int i=0;i<nums.size();i++){
            ash[nums[i]]++;
        }
        for(auto i : ash){
            if(i.second == 1){
                return i.first;
            }
        }
        return -1;
    }
};