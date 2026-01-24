class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& matrix) {
        int n=matrix.size();
        for(int i=n-2;i>=0;i--){
            for(int j=0;j<n;j++){
                if(j==0){
                    matrix[i][j]+=min(matrix[i+1][j],matrix[i+1][j+1]);
                }
                else if(j==n-1){
                    matrix[i][j]+=min(matrix[i+1][j-1],matrix[i+1][j]);
                }
                else{
                    matrix[i][j]+=min(matrix[i+1][j],min(matrix[i+1][j+1],matrix[i+1][j-1]));
                }
            }
        }
        int ans=INT_MAX;
        for(int i=0;i<n;i++){
            if(ans>matrix[0][i]){
                ans=matrix[0][i];
            }
        }
        return ans;
    }
};