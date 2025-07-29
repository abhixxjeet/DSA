class Solution {
public:
    vector<vector<int>>directions{{1,0},{-1,0},{0,1},{0,-1},{-1,-1},{1,1},{-1,1},{1,-1}};
    vector<vector<string>>ans;
    bool issafe(vector<string>&board,int row,int col,int n){
       for(auto &dir :directions){       
        int i=row,j=col;
        while(i>=0 && j>=0 && i<n && j<n){ 
              if(board[i][j]=='Q'){
                return false;
              }
              i+=dir[0];
              j+=dir[1];
            }
        }
        return true;
    }
    void solve(vector<string>&board,int row,int n){
        if(row==n){
            ans.push_back(board);
            return;
        }
        for(int col=0;col<n;col++){
          if(issafe(board,row,col,n)){
            board[row][col]='Q';
            solve(board,row+1,n);
            board[row][col]='.';
          }
        }  
    }
    vector<vector<string>> solveNQueens(int n) {
        vector<string>board(n,string(n,'.'));
        solve(board,0,n);
        return ans;

    }
};