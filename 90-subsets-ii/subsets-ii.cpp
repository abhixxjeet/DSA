class Solution {
public:
    vector<vector<int>>ans;
    void solve(vector<int>&nums,vector<int>&temp,int start){
        ans.push_back(temp);
        for(int i=start;i<nums.size();i++){
            if(i>start && nums[i]==nums[i-1]){
                continue;
            }
            temp.push_back(nums[i]);
            solve(nums,temp,i+1);
            temp.pop_back();
        }
    }
    vector<vector<int>>subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int>temp;
        int i=0;
        solve(nums,temp,i);
        return ans;
    }
};