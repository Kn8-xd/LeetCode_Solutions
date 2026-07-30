class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int cursum=0;
        int l=0,target=k*threshold,cnt=0;
        for(int r=0;r<arr.size();r++) {
            cursum+=arr[r];
            if(r-l+1==k) {
                if(cursum>=target) cnt++;
                cursum-=arr[l++];
                
            }
        }
        return cnt;
    }
};