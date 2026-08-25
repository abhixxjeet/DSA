class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        unordered_set<int>set;

        for(int i=0;i<nums.size();i++){
            set.insert(nums[i]);
        }
        
        int n=k;

        while(n<INT_MAX){
            if(set.find(n)==set.end()){
                return n;
            }
            n+=k;
        }
        return -1;
    }
};