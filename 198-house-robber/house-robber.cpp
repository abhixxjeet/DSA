class Solution {
public:
    int rob(vector<int>& nums) {
        int n=nums.size();
        vector<int>temp(n);
        if(n<=1){
            return nums[0];
        }
        else if(n<=2){
            return max(nums[1],nums[0]);
        }
        else if(n<=3){
            return max((nums[0]+nums[2]),nums[1]);
        }
        temp[0]=nums[0];
        temp[1]=nums[1];
        temp[2]=nums[0]+nums[2];

        for(int i=3;i<n;i++){
           temp[i]=max(temp[i-2],temp[i-3])+nums[i];
        }
        return max(temp[n-2],temp[n-1]);
    }
};