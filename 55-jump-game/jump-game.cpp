class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n=nums.size();
        if(nums[0]==0 ){
            if(n==1){
            return true;
            }
            else{
                return false;
            }
        }
        int maxJ=nums[0];
        for(int i=1;i<n-1;i++){
            maxJ=max(maxJ-1,nums[i]);
            if(maxJ==0){
                return false;
            }
        }
        return true;
    }
};