class Solution {
public:
    int n,m;
    vector<vector<int>>directions{{1,0},{-1,0},{0,1},{0,-1}};
    bool solve(vector<vector<char>>& board,string word,int i,int j,int index){
      if(index==word.length()){
        return true;
      }
      if(i<0 || j<0 || i>=m || j>=n || board[i][j]=='$'){
        return false;
      }
      if(board[i][j]!=word[index]){
        return false;
      }
      char temp=board[i][j];
      board[i][j]='$';
      for(auto &dir : directions){
        int new_i=i+dir[0];
        int new_j=j+dir[1];

        if(solve(board,word,new_i,new_j,index+1)){
            return true;
        }
      }
      board[i][j]=temp;
      return false;
    }
    bool exist(vector<vector<char>>& board, string word) {
         m=board.size();
         n=board[0].size();
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(board[i][j]==word[0] && solve(board,word,i,j,0)){
                    return true;
                }
            }
        }
        return false;
    }
};