class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        int rows = grid.size(), cols = grid[0].size();
        int total = rows * cols;
        k = k % total;

        vector<int> vec;
        vec.reserve(total);

        for (int i = 0; i < total; i++) {
            vec.push_back(grid[i / cols][i % cols]);
        }

        reverse(vec.begin(), vec.end());
        reverse(vec.begin(), vec.begin() + k);
        reverse(vec.begin() + k, vec.end());
        vector<vector<int>> ans(rows, vector<int>(cols));
        for (int i = 0; i < total; i++) {
            ans[i / cols][i % cols] = vec[i];
        }

        return ans;
    }
};