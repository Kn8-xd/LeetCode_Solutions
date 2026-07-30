class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        sort(points.begin(),points.end(),[](const vector<int>&a,const vector<int>&b){
            return a[1]<b[1];
        });
        int res=0;
        long long cur=LLONG_MIN;
        for(int i=0;i<points.size();i++) {
            if(points[i][0]>cur){
                cur=points[i][1];
                res++;
            }
        }
        return res;
    }
};