class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        stack<int>stk;
        unordered_map<int,int>mp;
        for(int curnum:nums2) {
            while(!stk.empty()&&curnum>stk.top()) {
                int wait=stk.top();
                stk.pop();
                mp[wait]=curnum;
            }
            stk.push(curnum);
        }
        vector<int>res;
        for(int num:nums1) {
            if(mp.count(num)) res.push_back(mp[num]);
        else res.push_back(-1);
        }
        return res;
    }
};