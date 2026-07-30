class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>>ansm(n,vector<int>(n,0));
        int top=0,bottom=n-1,left=0,right=n-1,val=1;
        while(val<=n*n) {
            for(int i=left;i<=right;i++) {
                ansm[top][i]=val++;
            }
            top++;
            for(int i=top;i<=bottom;i++) {
                ansm[i][right]=val++;
            }
            right--;
            for(int i=right;i>=left;i--) {
                ansm[bottom][i]=val++;
            }
            bottom--;
            for(int i=bottom;i>=top;i--) {
                ansm[i][left]=val++;
            }
            left++;
        }
        return ansm;
    }
};