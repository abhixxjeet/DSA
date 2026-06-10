class Solution {
public:
    long long maxTotalValue(vector<int>& nums, int k) {
        long long maxV=*max_element(nums.begin(),nums.end());
        long long minV=*min_element(nums.begin(),nums.end());

        long long ans=k*(maxV-minV);

        return ans;
    }
};