class Solution {
public:
    int n;
    int dp[2501][2501];
    int solve(int i,int prev,vector<int>&nums){
        n=nums.size();
        if(i==n){
            return 0;
        }
       
       if(dp[i][prev+1] !=-1){
        return dp[i][prev+1];
       }

       int skip=solve(i+1,prev,nums);

       int take=0;

       if(prev==-1 || nums[i]>nums[prev]){
        take= 1 + solve(i+1,i,nums);
       }
       
       return dp[i][prev+1]=max(take,skip);
    }
    int lengthOfLIS(vector<int>& nums) {
        n=nums.size();
        memset(dp,-1,sizeof(dp));
        return solve(0,-1,nums);
    }
};