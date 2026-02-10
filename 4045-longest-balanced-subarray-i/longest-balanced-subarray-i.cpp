class Solution {
public:
    int longestBalanced(vector<int>& nums) {
        int n=nums.size();
        int count=0;
        for(int i=0;i<n;i++){
            unordered_set<int>evenSet;
            unordered_set<int>oddSet;
            for(int j=i;j<n;j++){
              if(nums[j]%2==0){
                evenSet.insert(nums[j]);
              }
              else{
                oddSet.insert(nums[j]);
              }
              if(oddSet.size()==evenSet.size()){
                count=max(count,j-i+1);
              }
            }
        }
        return count;
    }
};