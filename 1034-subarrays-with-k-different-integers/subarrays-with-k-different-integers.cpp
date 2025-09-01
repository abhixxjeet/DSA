class Solution {
public:
    int ksubarray(vector<int>&nums,int k){
        int n=nums.size();
        int left=0;
        int result=0;
        unordered_map<int,int>mp;
        for(int right=0; right<n;right++){
            if(mp[nums[right]]==0){
                k--;
            }
            mp[nums[right]]++;
            while(k<0){
                mp[nums[left]]--;
                if(mp[nums[left]]==0){
                    k++;
                }
                left++;
            }
            result+=(right-left+1);
        }
        return result;
    }
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        return ksubarray(nums,k)-ksubarray(nums,k-1);
    }
};