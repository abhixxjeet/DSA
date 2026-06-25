class Solution {
public:
    int countMajoritySubarrays(vector<int>& nums, int target) {
        int count=0;
        for(int i=0;i<nums.size();i++){
            vector<int>temp;
            int count1=0;
            for(int j=i;j<nums.size();j++){
               temp.push_back(nums[j]);
               if(nums[j]==target){
                count1++;
               }

               if(count1>temp.size()/2){
                count++;
               }
            }
        }
        return count;
    }
};