class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n=nums.size();
        int j=0;
        int i=0;
        int sum=0;
        int ans=INT_MAX;
        
        while(j<n){
            sum+=nums[j];
            while(sum>=target){
                int temp=j-i+1;
                ans=min(ans,temp);
                sum-=nums[i];
                i++;
            }
            j++;
        }

        return ans==INT_MAX?0:ans;
    }
};