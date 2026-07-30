class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size();
        int l=0,r=n-1,maxs=0;
        while(l<r) {
            int val=abs(l-r)*(min(height[l],height[r]));
            if(val>maxs) maxs=val;
            if(height[l]<height[r]) l++;
            else r--;
        }
        return maxs;
    }
};