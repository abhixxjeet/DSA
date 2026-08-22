class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int n=nums.size();
        int ans=0;
        int j=0;
        int zeros=0;

        for(int i=0;i<n;i++){
            if(nums[i]==0){
                zeros++;
            }

            while(zeros>1){
                if(nums[j]==0){
                    zeros--;
                }
                j++;
            }

            ans=max(ans,i-j);
        }

        return ans;
    }
};