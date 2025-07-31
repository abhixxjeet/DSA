class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int tempmax=nums[0];
        int tempmin=nums[0];
        int ans=nums[0];
        for(int i=1;i<nums.size();i++){
            int prevmax=tempmax;
            int current=nums[i];
            tempmax=max({current,current*tempmax,current*tempmin});
            tempmin=min({current,current*prevmax,current*tempmin});
            ans=max(ans,tempmax);
        }
        return ans;
    }
};