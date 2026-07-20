class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        
        vector<vector<int>>temp=grid;
        int m=grid.size();
        int n=grid[0].size();

        while(k--){
            for(int i=0;i<m;i++){
                for(int j=0;j<n;j++){
                    if(i==m-1 && j==n-1){
                        temp[0][0]=grid[i][j];
                    }
                    else if(j==n-1){
                        temp[i+1][0]=grid[i][n-1];
                    }
                    else{
                        temp[i][j+1]=grid[i][j];
                    }
                }
            }

            grid=temp;
        }

        return temp;
    }
};