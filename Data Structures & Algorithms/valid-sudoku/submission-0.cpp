class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        map<int,set<char>> rowIndexToSetMap;
        map<int,set<char>> colIndexToSetMap;
        map<int,set<char>> subBoxToSetMap; //{9 boxes: 1st box:[values],2nd box:[values]}


        for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){
            //    get nums[i][j];
            //    check if nums[i][j] already exist in row:
            //    check if nums[i][j] already exist in col:
                char num=board[i][j];
                if(num=='.')
                continue;
                int boxIndex = (i/3)*3+(j/3);
                if(rowIndexToSetMap[i].count(num) ||
                   colIndexToSetMap[j].count(num) ||
                   subBoxToSetMap[boxIndex].count(num)){
                    return false;
                }
                rowIndexToSetMap[i].insert(num);
                colIndexToSetMap[j].insert(num);
                subBoxToSetMap[boxIndex].insert(num);
            }
        }
        return true;
    }
};
