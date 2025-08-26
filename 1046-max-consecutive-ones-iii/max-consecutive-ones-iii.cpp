class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int left=0;
        int maxzero=0;
        int maxc=0;
        for(int right=0;right<nums.size();right++){
          if(nums[right]==0){
            maxzero++;
          }
          
          if(maxzero>k){
            if(nums[left]==0){
                maxzero--;
            }
            left++;
          }
          maxc=max(maxc,right-left+1);
        }
        return maxc;
    }
};