class Solution {
public:
    bool canThreePartsEqualSum(vector<int>& arr) {
        int sum=accumulate(arr.begin(),arr.end(),0);
        int target=sum/3;
        if(sum%3!=0) return false;
        int cur=0,res=0;
        for(int num:arr){
            cur+=num;
            if(cur==target) {
                res++;
                cur=0;
            }
        }
        return res>=3;
    }
};