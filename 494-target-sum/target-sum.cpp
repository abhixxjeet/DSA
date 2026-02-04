class Solution {
public:
    int findTargetSumWays(vector<int>& nums, int target) {
        int sum=0;
        for(int num:nums){
            sum+=num;
        }
        if((sum+target)%2!=0 || abs(target)>sum){
            return 0;
        }
        int P=(sum+target)/2;
        vector<int>dp(P+1,0);
        dp[0]=1;
        for(int i=0;i<nums.size();i++){
            for(int j=P;j>=nums[i];j--){
                dp[j]+=dp[j-nums[i]];
            }
        }
        return dp[P];
    }
};