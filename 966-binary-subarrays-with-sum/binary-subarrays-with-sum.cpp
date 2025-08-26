class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        vector<int>ans;
        int n=nums.size();
        int count=0;
        for(int i=0;i<n;i++){
            int sum=nums[i];
            if(sum==goal){
                count++;
            }
          for(int j=i+1;j<n;j++){
            sum=sum+nums[j];
            if(sum==goal){
              count++;
            }
          }
        }
        return count;
    }
};