class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m=matrix.size()-1;
        int n=matrix[0].size()-1;

        int low=0;
        int high=m;
        int midL=0;
        int midH=0;
        int i=0;
        while(low<=high){
           i=low+(high-low)/2;
           midL=matrix[i][0];
           midH=matrix[i][n];
           if(target==midL || target==midH){
            return true;
           }
           if(target>midH){
            low=i+1;
           }
           else if(target<midL){
            high=i-1;
           }
           else if(target<midH && target>midL){
            break;
           }
        }
        low=0;
        high=n;
        while(low<=high){
          int mid=low+(high-low)/2;
          if(target==matrix[i][mid]){
            return true;
          }
          else if(target<matrix[i][mid]){
            high=mid-1;
          }
          else if(target>matrix[i][mid]){
            low=mid+1;
          }
          else{
            break;
          }
        }

        return false;
    }
};