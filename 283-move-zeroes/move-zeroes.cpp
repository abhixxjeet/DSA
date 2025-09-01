class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int count=0;
        int j=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                count++;
            }
            else{
              nums[j]=nums[i];
              j++;
            }
        }
        while(count--){
            nums[j]=0;
            j++;
        }
    }
};