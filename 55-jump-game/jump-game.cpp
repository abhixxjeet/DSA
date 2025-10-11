class Solution {
public:
    bool canJump(vector<int>& nums) {
        if(nums[0]==0){
            if(nums.size()>1){
            return false;
            }
            else{
                return true;
            }

        }
        int maxl=nums[0];
        for(int i=1;i<nums.size()-1;i++){
            if(maxl-1<=0 && nums[i]==0){
                return false;
            }
            maxl=max(nums[i],maxl-1);
        }
        return true;
    }
};