class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n=nums.size();
        int target=0;
        int sum=0;
        vector<vector<int>>ans;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n-1;i++){
            int left=i+1;
            int right=n-1;
            
            if(i>0 && nums[i]==nums[i-1]){
                continue;
            }
            target=-nums[i];

            while(left<right){
                sum=nums[left]+nums[right];

                if(target==sum){
                    ans.push_back({nums[i],nums[left],nums[right]});
                

                while(left<right && nums[left]==nums[left+1]){
                    left++;
                }
                while(left<right && nums[right]==nums[right-1]){
                    right--;
                }

                left++;
                right--;
                }
                else if(sum<target){
                left++;
                }
                 else{
                right--;
                 }
            }
            

        }

        return ans;
    }
};