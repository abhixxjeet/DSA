class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        unordered_set<int> seen;
        int left = 0, right = 0;
        int sum = 0, maxSum = 0;

        while (right < nums.size()) {
            while (seen.find(nums[right]) != seen.end()) {
                sum -= nums[left];
                seen.erase(nums[left]);
                left++;
            }
            sum += nums[right];
            seen.insert(nums[right]);
            maxSum = max(maxSum, sum);
            right++;
        }

        return maxSum;
    }
};