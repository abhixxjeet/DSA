class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        int minE=*min_element(nums.begin(),nums.end());
        int maxE=*max_element(nums.begin(),nums.end());
        
        vector<int>ans;
        sort(nums.begin(),nums.end());
        int j=0;

        for(int i=minE;i<=maxE;i++){
            if(i==nums[j]){
                j++;
            }
            else{
                ans.push_back(i);
            }
        }

        return ans;
    }
};