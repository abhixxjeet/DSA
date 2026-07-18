class Solution {
public:
    int findGCD(vector<int>& nums) {
        int minE=*min_element(nums.begin(),nums.end());
        int maxE=*max_element(nums.begin(),nums.end());

        return gcd(minE,maxE);
    }
};