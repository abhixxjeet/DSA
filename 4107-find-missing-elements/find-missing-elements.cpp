class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        int minN=*min_element(nums.begin(),nums.end());
        int maxN=*max_element(nums.begin(),nums.end());
        vector<int>ans;
        unordered_set<int>s1(nums.begin(),nums.end());
        for(int i=minN; i<=maxN; i++){
          if(!s1.count(i)){
            ans.push_back(i);
          }
        }
        return ans;
    }
};