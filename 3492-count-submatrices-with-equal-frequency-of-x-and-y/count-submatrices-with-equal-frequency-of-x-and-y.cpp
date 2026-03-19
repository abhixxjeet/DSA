class Solution {
public:
    int numberOfSubmatrices(vector<vector<char>>& grid) {
        int n=grid.size();
        int m=grid[0].size();

        vector<int>colX(m,0),colY(m,0);
        int count=0;

        for(int i=0;i<n;i++){
            int rowX=0,rowY=0;

            for(int j=0;j<m;j++){

                if(grid[i][j]=='X'){
                    colX[j]++;
                }
                if(grid[i][j]=='Y'){
                    colY[j]++;
                }

                rowX+=colX[j];
                rowY+=colY[j];


                if(rowX==rowY && rowX>0){
                    count++;
                }
            }
        }

        return count;
    }
};