class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();

        for(int i=0;i<nums.size();i++){
            int temp=nums[i];
            for(int j=i+1;j<nums.size();j++){
                if(temp+nums[j]==target){
                    return {i,j};
                }
            }
        }
        return {-1,-1};
    }
};