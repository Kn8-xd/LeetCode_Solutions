class Solution {
public:
    int jump(vector<int>& nums) {
        int cur=0,maxx=0,jump=0;
        for(int i=0;i<nums.size()-1;i++){
            maxx=max(maxx,i+nums[i]);
            if(i==cur) {
                jump++;
                cur=maxx;
            }
        }
        return jump;
    }
};