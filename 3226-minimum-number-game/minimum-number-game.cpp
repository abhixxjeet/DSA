class Solution {
public:
    vector<int> numberGame(vector<int>& nums) {
        vector<int>ans;
        sort(nums.begin(),nums.end());

        for(int i=0;i<nums.size();i++){
            int x=nums[i];
            i++;
            int y=nums[i];
            ans.push_back(y);
            ans.push_back(x);
        }
        return ans;
    }
};