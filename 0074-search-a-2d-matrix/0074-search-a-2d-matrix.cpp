class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int rows = matrix.size(),cols = matrix[0].size();
        int low=0,high=rows*cols-1;
        while(low<=high) {
            int mid=low+(high-low)/2;
            int curow=mid/cols;
            int curcol=mid%cols;
            if(matrix[curow][curcol]>target) high=mid-1;
            else if(matrix[curow][curcol]<target) low=mid+1;
            else return true;
        }
        return false;
    }
};