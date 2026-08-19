class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        int n=nums.size();
        int j=0;
        int i=0;

        unordered_map<int,int>mp;

        while(j<n){
            mp[nums[j]]++;
            
            if(mp[nums[j]]>1 && abs(i-j)<=k){
                return true;
            }

            if(j-i+1>k){
                mp[nums[i]]--;
                i++;
            }

            j++;

        }

        return false;
    }
};