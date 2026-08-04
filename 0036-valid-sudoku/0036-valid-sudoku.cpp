class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        vector<unordered_set<int>> rows(9);
        vector<unordered_set<int>> columns(9);
        vector<unordered_set<int>> box(9);

        for(int r=0;r<9;r++) {
            for(int c=0;c<9;c++) {
                char val=board[r][c];
                int boxid=(r/3)*3+(c/3);
                if(val=='.') continue;
                if(rows[r].count(val)||columns[c].count(val)||box[boxid].count(val)) return false;
                rows[r].insert(val);
                columns[c].insert(val);
                box[boxid].insert(val);
            }
        }
        return true;
    }
};