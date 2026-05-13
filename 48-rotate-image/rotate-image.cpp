class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        vector<vector<int>>temp=matrix;
        int m=matrix.size();
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[0].size();j++){
                matrix[j][m-i-1]=temp[i][j];
            }
        }
    }
};