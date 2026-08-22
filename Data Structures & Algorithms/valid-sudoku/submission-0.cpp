class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        for(int i=0;i<9;i++){
            unordered_map<char,int> mp1,mp2;
            for(int j=0;j<9;j++){
                if(board[i][j]!='.'){
                     mp1[board[i][j]]++;
                     if(mp1[board[i][j]]>1) return false;
                }
            }
            for(int j=0;j<9;j++){
                if(board[j][i]!='.'){
                     mp2[board[j][i]]++;
                     if(mp2[board[j][i]]>1) return false;
                }
            }
        }
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                unordered_map<int,int> mp;
                for(int k=j*3;k<j*3+3;k++){
                    for(int p=i*3;p<i*3+3;p++){
                        if(board[k][p]!='.'){
                            mp[board[k][p]]++;
                            if(mp[board[k][p]]>1) return false;
                        }
                    }
                }
            }
        }
        return true;
    }
};
