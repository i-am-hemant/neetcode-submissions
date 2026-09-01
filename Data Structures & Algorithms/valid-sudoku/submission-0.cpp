class Solution {
public:
    bool validateRows(vector<vector<char>>& board){
        for(int row=0;row<9;row++){
            unordered_set<int> st;
            for(int col=0;col<9;col++){
                if(board[row][col]=='.')    continue;
                if(st.find(board[row][col]) != st.end())    return false;
                st.insert(board[row][col]);
            }
        }
        return true;
    }
    bool validateCols(vector<vector<char>>& board){
        for(int col=0;col<9;col++){
            unordered_set<int> st;
            for(int row=0;row<9;row++){
                if(board[row][col]=='.')    continue;
                if(st.find(board[row][col]) != st.end())    return false;
                st.insert(board[row][col]);
            }
        }
        return true;
    }
    bool validateGrids(vector<vector<char>>& board) {
        for(int row=0;row<9;row+=3){
            for(int col=0;col<9;col+=3){
                unordered_set<int> st;
                for(int i=0;i<3;i++){
                    for(int j=0;j<3;j++){
                        if(board[row+i][col+j]=='.')    continue;
                        if(st.find(board[row+i][col+j]) != st.end())    return false;
                        st.insert(board[row+i][col+j]);
                    }
                }
            }
        }
        return true;
    }

    bool isValidSudoku(vector<vector<char>>& board) {
        return validateRows(board) && validateCols(board) && validateGrids(board);
    }
};
