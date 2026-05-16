class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n=nums.size();
        vector<int>temp(n,1);
        for(int i=0;i<n;i++){
            temp[nums[i]]--;
        }
        for(int i=1;i<n;i++){
            if(temp[i]<0){
                return i;
            }
        }
        return -1;
    }
};